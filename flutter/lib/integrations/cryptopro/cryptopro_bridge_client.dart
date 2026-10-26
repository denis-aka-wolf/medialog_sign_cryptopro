import 'dart:async';
import 'dart:convert';
import 'dart:io';

class CryptoProBridgeException implements Exception {
  const CryptoProBridgeException(this.code, this.message, {this.details});

  final String code;
  final String message;
  final String? details;

  @override
  String toString() => 'CryptoProBridgeException($code): $message';
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
  CryptoProBridgeClient({required this.executablePath, this.timeout = const Duration(seconds: 90)});

  final String executablePath;
  final Duration timeout;

  Future<Map<String, dynamic>> status() => _call({'action': 'status'});

  Future<List<CryptoProCertificate>> listCertificates() async {
    final response = await _call({'action': 'list-certificates'});
    final raw = response['certificates'];
    if (raw is! List) return const [];
    return raw
        .whereType<Map>()
        .map((item) => CryptoProCertificate.fromJson(Map<String, dynamic>.from(item)))
        .toList(growable: false);
  }

  Future<Map<String, dynamic>> signDetached({
    required String inputPath,
    required String outputPath,
    required String certificateThumbprint,
  }) {
    return _call({
      'action': 'sign-detached',
      'inputPath': inputPath,
      'outputPath': outputPath,
      'thumbprint': certificateThumbprint,
    });
  }

  Future<Map<String, dynamic>> signAttached({
    required String inputPath,
    required String outputPath,
    required String certificateThumbprint,
  }) {
    return _call({
      'action': 'sign-attached',
      'inputPath': inputPath,
      'outputPath': outputPath,
      'thumbprint': certificateThumbprint,
    });
  }

  Future<Map<String, dynamic>> verifyDetached({
    required String inputPath,
    required String signaturePath,
  }) {
    return _call({
      'action': 'verify-detached',
      'inputPath': inputPath,
      'signaturePath': signaturePath,
    });
  }

  Future<Map<String, dynamic>> _call(Map<String, Object?> request) async {
    final executable = File(executablePath);
    if (!await executable.exists()) {
      throw const CryptoProBridgeException(
        'BRIDGE_NOT_FOUND',
        'Не найден Windows-компонент CryptoProBridge. Проверьте путь к EXE.',
      );
    }

    Process process;
    try {
      process = await Process.start(
        executable.absolute.path,
        const [],
        runInShell: false,
        mode: ProcessStartMode.normal,
      ).timeout(timeout);
    } on Object catch (error) {
      throw CryptoProBridgeException('BRIDGE_START_FAILED', 'Не удалось запустить криптографический компонент.', details: '$error');
    }

    final stdoutFuture = utf8.decoder.bind(process.stdout).join();
    final stderrFuture = utf8.decoder.bind(process.stderr).join();
    process.stdin.write(jsonEncode(request));
    await process.stdin.close();

    try {
      final exitCode = await process.exitCode.timeout(timeout);
      final stdoutText = await stdoutFuture.timeout(const Duration(seconds: 5));
      final stderrText = await stderrFuture.timeout(const Duration(seconds: 5));
      Map<String, dynamic> envelope;
      try {
        final decoded = jsonDecode(stdoutText.trim());
        if (decoded is! Map) throw const FormatException('Ответ не является JSON-объектом.');
        envelope = Map<String, dynamic>.from(decoded);
      } on Object catch (error) {
        throw CryptoProBridgeException(
          'INVALID_BRIDGE_RESPONSE',
          'Криптографический компонент вернул некорректный ответ.',
          details: 'exitCode=$exitCode; stderr=$stderrText; parseError=$error',
        );
      }

      if (envelope['ok'] != true) {
        final error = envelope['error'];
        if (error is Map) {
          throw CryptoProBridgeException(
            error['code'] as String? ?? 'OPERATION_FAILED',
            error['message'] as String? ?? 'Операция КриптоПро завершилась ошибкой.',
            details: error['details'] as String?,
          );
        }
        throw CryptoProBridgeException('OPERATION_FAILED', 'Операция КриптоПро завершилась ошибкой.', details: stderrText);
      }
      final data = envelope['data'];
      if (data is! Map) return <String, dynamic>{};
      return Map<String, dynamic>.from(data);
    } on TimeoutException {
      process.kill(ProcessSignal.sigkill);
      throw const CryptoProBridgeException('OPERATION_TIMEOUT', 'Операция КриптоПро превысила допустимое время ожидания.');
    }
  }
}
