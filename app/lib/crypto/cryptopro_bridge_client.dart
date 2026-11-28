import 'dart:async';
import 'dart:convert';
import 'dart:io';

class CryptoProBridgeException implements Exception {
  const CryptoProBridgeException(
    this.code,
    this.message, {
    this.details,
  });

  final String code;
  final String message;
  final String? details;

  @override
  String toString() =>
      'CryptoProBridgeException($code): $message'
      '${details == null ? '' : '\n$details'}';
}

class CryptoProCertificate {
  const CryptoProCertificate({
    required this.thumbprint,
    required this.subjectName,
    required this.issuerName,
    required this.serialNumber,
    required this.validFrom,
    required this.validTo,
    required this.hasPrivateKey,
    required this.dateRangeValid,
    required this.isReadyForSigning,
  });

  final String thumbprint;
  final String subjectName;
  final String issuerName;
  final String serialNumber;
  final String validFrom;
  final String validTo;
  final bool hasPrivateKey;
  final bool dateRangeValid;
  final bool isReadyForSigning;

  factory CryptoProCertificate.fromJson(Map<String, dynamic> json) {
    return CryptoProCertificate(
      thumbprint: json['thumbprint'] as String? ?? '',
      subjectName: json['subjectName'] as String? ?? '',
      issuerName: json['issuerName'] as String? ?? '',
      serialNumber: json['serialNumber'] as String? ?? '',
      validFrom: json['validFrom'] as String? ?? '',
      validTo: json['validTo'] as String? ?? '',
      hasPrivateKey: json['hasPrivateKey'] as bool? ?? false,
      dateRangeValid: json['dateRangeValid'] as bool? ?? false,
      isReadyForSigning: json['isReadyForSigning'] as bool? ?? false,
    );
  }
}

class CryptoProBridgeClient {
  CryptoProBridgeClient({
    required this.executablePath,
    this.timeout = const Duration(seconds: 90),
  });

  final String executablePath;
  final Duration timeout;

  Future<Map<String, dynamic>> status() => _call({'action': 'status'});

  Future<List<CryptoProCertificate>> listCertificates() async {
    final data = await _call({'action': 'list-certificates'});
    final raw = data['certificates'];
    if (raw is! List) return const [];
    return raw
        .whereType<Map>()
        .map((e) => CryptoProCertificate.fromJson(
              Map<String, dynamic>.from(e),
            ))
        .toList(growable: false);
  }

  Future<Map<String, dynamic>> signDetached({
    required String inputPath,
    required String outputPath,
    required String thumbprint,
    String profile = 'CAdES-BES',
    String? tspUrl,
  }) =>
      _call({
        'action': 'sign-detached',
        'inputPath': inputPath,
        'outputPath': outputPath,
        'thumbprint': thumbprint,
        'profile': profile,
        if (tspUrl != null && tspUrl.isNotEmpty) 'tspUrl': tspUrl,
      });

  Future<Map<String, dynamic>> signAttached({
    required String inputPath,
    required String outputPath,
    required String thumbprint,
    String profile = 'CAdES-BES',
    String? tspUrl,
  }) =>
      _call({
        'action': 'sign-attached',
        'inputPath': inputPath,
        'outputPath': outputPath,
        'thumbprint': thumbprint,
        'profile': profile,
        if (tspUrl != null && tspUrl.isNotEmpty) 'tspUrl': tspUrl,
      });

  Future<Map<String, dynamic>> upgradeSignature({
    required String inputPath,
    required String outputPath,
    required String profile,
    String? tspUrl,
    int signerIndex = 0,
  }) =>
      _call({
        'action': 'upgrade-signature',
        'inputPath': inputPath,
        'outputPath': outputPath,
        'profile': profile,
        'signerIndex': signerIndex.toString(),
        if (tspUrl != null && tspUrl.isNotEmpty) 'tspUrl': tspUrl,
      });

  Future<Map<String, dynamic>> verifyDetached({
    required String inputPath,
    required String signaturePath,
    String profile = 'CAdES-BES',
  }) =>
      _call({
        'action': 'verify-detached',
        'inputPath': inputPath,
        'signaturePath': signaturePath,
        'profile': profile,
      });

  Future<Map<String, dynamic>> verifyAttached({
    required String signaturePath,
    String profile = 'CAdES-BES',
  }) =>
      _call({
        'action': 'verify-attached',
        'inputPath': signaturePath,
        'profile': profile,
      });

  Future<Map<String, dynamic>> _call(Map<String, Object?> request) async {
    final exe = File(executablePath);
    if (!await exe.exists()) {
      throw const CryptoProBridgeException(
        'BRIDGE_NOT_FOUND',
        'Не найден исполняемый файл Native CryptoPro Bridge.',
      );
    }

    Process process;
    try {
      process = await Process.start(
        exe.absolute.path,
        const [],
        runInShell: false,
        mode: ProcessStartMode.normal,
      ).timeout(timeout);
    } on Object catch (e) {
      throw CryptoProBridgeException(
        'BRIDGE_START_FAILED',
        'Не удалось запустить Bridge.',
        details: '$e',
      );
    }

    final stdoutFuture = utf8.decoder.bind(process.stdout).join();
    final stderrFuture = utf8.decoder.bind(process.stderr).join();

    try {
      process.stdin.write(jsonEncode(request));
      await process.stdin.close();

      final exitCode = await process.exitCode.timeout(timeout);
      final stdoutText = await stdoutFuture.timeout(const Duration(seconds: 5));
      final stderrText = await stderrFuture.timeout(const Duration(seconds: 5));

      Map<String, dynamic> envelope;
      try {
        final decoded = jsonDecode(stdoutText.trim());
        if (decoded is! Map) {
          throw const FormatException('Ожидался JSON-объект.');
        }
        envelope = Map<String, dynamic>.from(decoded);
      } on Object catch (e) {
        throw CryptoProBridgeException(
          'INVALID_BRIDGE_RESPONSE',
          'Bridge вернул некорректный JSON.',
          details: 'exitCode=$exitCode; stderr=$stderrText; error=$e',
        );
      }

      if (envelope['ok'] != true) {
        final error = envelope['error'];
        if (error is Map) {
          throw CryptoProBridgeException(
            error['code'] as String? ?? 'BRIDGE_OPERATION_FAILED',
            error['message'] as String? ?? 'Операция завершилась ошибкой.',
            details: error['details'] as String?,
          );
        }
        throw CryptoProBridgeException(
          'BRIDGE_OPERATION_FAILED',
          'Операция завершилась ошибкой.',
          details: stderrText,
        );
      }

      final data = envelope['data'];
      if (data is! Map) return <String, dynamic>{};
      return Map<String, dynamic>.from(data);
    } on TimeoutException {
      process.kill(ProcessSignal.sigkill);
      throw const CryptoProBridgeException(
        'OPERATION_TIMEOUT',
        'Истекло время ожидания ответа Bridge.',
      );
    }
  }
}
