import 'dart:io';

import 'package:flutter/material.dart';

import 'crypto/cryptopro_bridge_client.dart';

void main() => runApp(const CryptoProWorkbenchApp());

class CryptoProWorkbenchApp extends StatelessWidget {
  const CryptoProWorkbenchApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Medialog CryptoPro Workbench',
      debugShowCheckedModeBanner: false,
      theme: ThemeData(
        colorScheme: ColorScheme.fromSeed(seedColor: const Color(0xFF174A78)),
        useMaterial3: true,
      ),
      home: const WorkbenchPage(),
    );
  }
}

class WorkbenchPage extends StatefulWidget {
  const WorkbenchPage({super.key});

  @override
  State<WorkbenchPage> createState() => _WorkbenchPageState();
}

class _WorkbenchPageState extends State<WorkbenchPage> {
  final _bridgePath = TextEditingController(
    text: r'.\cryptopro\MedialogSign.CryptoProBridge.exe',
  );
  final _inputPath = TextEditingController(
    text: r'C:\CryptoProTest\source.txt',
  );
  final _signaturePath = TextEditingController(
    text: r'C:\CryptoProTest\source.p7s',
  );
  final _attachedPath = TextEditingController(
    text: r'C:\CryptoProTest\source-attached.p7s',
  );

  CryptoProBridgeClient? _client;
  List<CryptoProCertificate> _certificates = [];
  String? _selectedThumbprint;
  String _log = 'Стенд готов. Укажите путь к Native Bridge и проверьте его.';
  bool _busy = false;
  Map<String, dynamic>? _status;

  @override
  void dispose() {
    _bridgePath.dispose();
    _inputPath.dispose();
    _signaturePath.dispose();
    _attachedPath.dispose();
    super.dispose();
  }

  void _append(String message) {
    if (!mounted) return;
    setState(() {
      _log = '[${DateTime.now().toIso8601String()}] $message\n\n$_log';
    });
  }

  CryptoProBridgeClient get _bridge {
    final raw = _bridgePath.text.trim();
    final path = raw.startsWith('.\\')
        ? '${Directory.current.path}\\${raw.substring(2)}'
        : raw;
    return _client ??= CryptoProBridgeClient(executablePath: path);
  }

  Future<void> _run(String title, Future<void> Function() action) async {
    if (_busy) return;
    setState(() => _busy = true);
    _append('Начало: $title');
    try {
      await action();
      _append('Завершено: $title');
    } on CryptoProBridgeException catch (e) {
      _append('ОШИБКА ${e.code}: ${e.message}\n${e.details ?? ''}');
    } catch (e) {
      _append('НЕОЖИДАННАЯ ОШИБКА: $e');
    } finally {
      if (mounted) setState(() => _busy = false);
    }
  }

  Future<void> _checkStatus() => _run('Проверка Bridge', () async {
        _client = null;
        final result = await _bridge.status();
        setState(() => _status = result);
        _append('Ответ status:\n${result.toString()}');
      });

  Future<void> _loadCertificates() =>
      _run('Получение сертификатов', () async {
        final list = await _bridge.listCertificates();
        setState(() {
          _certificates = list;
          if (!_certificates.any((c) => c.thumbprint == _selectedThumbprint)) {
            _selectedThumbprint =
                _certificates.isEmpty ? null : _certificates.first.thumbprint;
          }
        });
        _append('Получено сертификатов: ${list.length}');
      });

  CryptoProCertificate? get _selectedCertificate {
    for (final cert in _certificates) {
      if (cert.thumbprint == _selectedThumbprint) return cert;
    }
    return null;
  }

  Future<void> _signDetached() => _run('Detached-подпись', () async {
        final cert = _selectedCertificate;
        if (cert == null) throw StateError('Сначала выберите сертификат.');
        final result = await _bridge.signDetached(
          inputPath: _inputPath.text.trim(),
          outputPath: _signaturePath.text.trim(),
          thumbprint: cert.thumbprint,
        );
        _append('Ответ sign-detached:\n${result.toString()}');
      });

  Future<void> _signAttached() => _run('Attached-подпись', () async {
        final cert = _selectedCertificate;
        if (cert == null) throw StateError('Сначала выберите сертификат.');
        final result = await _bridge.signAttached(
          inputPath: _inputPath.text.trim(),
          outputPath: _attachedPath.text.trim(),
          thumbprint: cert.thumbprint,
        );
        _append('Ответ sign-attached:\n${result.toString()}');
      });

  Future<void> _verifyDetached() => _run('Проверка detached-подписи', () async {
        final result = await _bridge.verifyDetached(
          inputPath: _inputPath.text.trim(),
          signaturePath: _signaturePath.text.trim(),
        );
        _append('Ответ verify-detached:\n${result.toString()}');
      });

  Future<void> _createTestFile() => _run('Создание тестового файла', () async {
        final file = File(_inputPath.text.trim());
        await file.parent.create(recursive: true);
        await file.writeAsString(
          'Medialog Sign CryptoPro native bridge test\n'
          'Created: ${DateTime.now().toIso8601String()}\n',
          flush: true,
        );
        _append('Создан тестовый файл: ${file.path}');
      });

  Future<void> _mutateTestFile() => _run('Изменение исходного файла', () async {
        final file = File(_inputPath.text.trim());
        if (!await file.exists()) throw StateError('Исходный файл не найден.');
        await file.writeAsString(
          '\nModified after signing: ${DateTime.now().toIso8601String()}\n',
          mode: FileMode.append,
          flush: true,
        );
        _append('Файл изменён. Повторите проверку подписи: она должна стать невалидной.');
      });

  Widget _pathField(String label, TextEditingController controller) {
    return Padding(
      padding: const EdgeInsets.only(bottom: 10),
      child: TextField(
        controller: controller,
        decoration: InputDecoration(
          labelText: label,
          border: const OutlineInputBorder(),
          isDense: true,
        ),
      ),
    );
  }

  Widget _actionButton(
    String label,
    IconData icon,
    VoidCallback? onPressed,
  ) =>
      FilledButton.tonalIcon(
        onPressed: _busy ? null : onPressed,
        icon: Icon(icon),
        label: Text(label),
      );

  @override
  Widget build(BuildContext context) {
    final cert = _selectedCertificate;
    return Scaffold(
      appBar: AppBar(
        title: const Text('Medialog Sign · CryptoPro Native Workbench'),
        actions: [
          if (_busy)
            const Padding(
              padding: EdgeInsets.all(16),
              child: SizedBox(
                width: 18,
                height: 18,
                child: CircularProgressIndicator(strokeWidth: 2),
              ),
            ),
        ],
      ),
      body: Row(
        children: [
          SizedBox(
            width: 520,
            child: ListView(
              padding: const EdgeInsets.all(20),
              children: [
                Text('1. Подключение Bridge',
                    style: Theme.of(context).textTheme.titleLarge),
                const SizedBox(height: 12),
                _pathField('Путь к Native Bridge EXE', _bridgePath),
                Wrap(spacing: 8, runSpacing: 8, children: [
                  _actionButton('Проверить Bridge', Icons.health_and_safety,
                      _checkStatus),
                  _actionButton('Список сертификатов', Icons.badge,
                      _loadCertificates),
                ]),
                if (_status != null) ...[
                  const SizedBox(height: 10),
                  Card(
                    child: Padding(
                      padding: const EdgeInsets.all(12),
                      child: Text('Status: ${_status.toString()}'),
                    ),
                  ),
                ],
                const Divider(height: 32),
                Text('2. Сертификат',
                    style: Theme.of(context).textTheme.titleLarge),
                const SizedBox(height: 12),
                DropdownButtonFormField<String>(
                  value: _selectedThumbprint,
                  isExpanded: true,
                  decoration: const InputDecoration(
                    labelText: 'Сертификат',
                    border: OutlineInputBorder(),
                  ),
                  items: _certificates
                      .map((c) => DropdownMenuItem(
                            value: c.thumbprint,
                            child: Text(
                              '${c.subjectName} · ${c.thumbprint}',
                              overflow: TextOverflow.ellipsis,
                            ),
                          ))
                      .toList(),
                  onChanged: _busy
                      ? null
                      : (value) => setState(() => _selectedThumbprint = value),
                ),
                if (cert != null) ...[
                  const SizedBox(height: 10),
                  Card(
                    child: Padding(
                      padding: const EdgeInsets.all(12),
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Text(cert.subjectName,
                              style: const TextStyle(
                                  fontWeight: FontWeight.bold)),
                          Text('Издатель: ${cert.issuerName}'),
                          Text('Срок: ${cert.validFrom} — ${cert.validTo}'),
                          Text('Закрытый ключ: ${cert.hasPrivateKey}'),
                          Text('Срок действителен: ${cert.dateRangeValid}'),
                          Text('Готов к подписи: ${cert.isReadyForSigning}'),
                        ],
                      ),
                    ),
                  ),
                ],
                const Divider(height: 32),
                Text('3. Файлы и операции',
                    style: Theme.of(context).textTheme.titleLarge),
                const SizedBox(height: 12),
                _pathField('Исходный файл', _inputPath),
                _pathField('Detached signature output / input', _signaturePath),
                _pathField('Attached signature output', _attachedPath),
                Wrap(spacing: 8, runSpacing: 8, children: [
                  _actionButton('Создать тестовый файл', Icons.note_add,
                      _createTestFile),
                  _actionButton('Подписать detached', Icons.draw,
                      _signDetached),
                  _actionButton('Подписать attached', Icons.verified,
                      _signAttached),
                  _actionButton('Проверить detached', Icons.fact_check,
                      _verifyDetached),
                  _actionButton('Изменить исходник', Icons.edit,
                      _mutateTestFile),
                ]),
                const SizedBox(height: 16),
                const Text(
                  'Важно: тестируйте только на тестовом сертификате и '
                  'искусственных данных. Проверка detached после изменения '
                  'файла должна завершиться неуспешно.',
                ),
              ],
            ),
          ),
          const VerticalDivider(width: 1),
          Expanded(
            child: Padding(
              padding: const EdgeInsets.all(20),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text('Журнал тестирования',
                      style: Theme.of(context).textTheme.titleLarge),
                  const SizedBox(height: 12),
                  Expanded(
                    child: Container(
                      width: double.infinity,
                      padding: const EdgeInsets.all(14),
                      decoration: BoxDecoration(
                        color: Theme.of(context)
                            .colorScheme
                            .surfaceContainerHighest,
                        borderRadius: BorderRadius.circular(12),
                      ),
                      child: SingleChildScrollView(
                        child: SelectableText(
                          _log,
                          style: const TextStyle(
                            fontFamily: 'Consolas',
                            fontSize: 12,
                          ),
                        ),
                      ),
                    ),
                  ),
                  Align(
                    alignment: Alignment.centerRight,
                    child: TextButton.icon(
                      onPressed: () => setState(() => _log = ''),
                      icon: const Icon(Icons.delete_outline),
                      label: const Text('Очистить журнал'),
                    ),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}
