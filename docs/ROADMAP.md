# Ограничения и roadmap

## Реализовано в исходниках 0.1.0

- [x] C++17 x64 консольный Bridge skeleton.
- [x] Один JSON request на процесс.
- [x] `status` и поиск зарегистрированных CryptoPro providers.
- [x] Перечисление `CurrentUser\\MY`.
- [x] Сертификатный SHA-1 thumbprint lookup.
- [x] CAdES-BES attached/detached sign calls.
- [x] Attached/detached verify calls.
- [x] Освобождение CAdES blobs/verification info.
- [x] CMake x64 project и PowerShell build/smoke scripts.
- [x] Документация архитектуры, API, безопасности, тестирования и сервера.

## Не проверено

- [ ] Компиляция C++ проекта MSVC x64.
- [ ] Запуск Bridge на Windows с установленным CAdES runtime.
- [ ] Подписание реальным CSP ключом/токеном.
- [ ] Attached/detached verify на реальных артефактах.
- [ ] Проверка всех кодов статуса CAdES на установленной версии SDK.
- [ ] Совместимость с целевой Medialog/Нетрica системой.
- [ ] Работа на Windows Server.

## Следующие технические задачи

### P0: первая сборка и исправления

1. Собрать MSVC x64 на машине с SDK.
2. Устранить компиляторные/API несовпадения с установленной версией.
3. Проверить runtime DLL load и provider detection.
4. Выполнить тест на тестовом сертификате.
5. Проверить detached/attached форматы независимым валидатором.

### P1: сертификаты и диагностика

1. Проверять реальный доступ к private key с `CryptAcquireCertificatePrivateKey` в безопасном/тихом режиме и возвращать диагностический статус.
2. Поддержать выбор CurrentUser/LocalMachine только после решения security context.
3. Возвращать алгоритм ключа, enhanced key usage, key usage и причины исключения сертификата из списка.
4. Добавить проверку дубликатов thumbprint и обработку некорректных свойств сертификата.

### P1: верификация и политика доверия

1. Уточнить параметры CAdES verification из `cades.chm`.
2. Разделить integrity, chain, revocation и timestamp status в модели результата.
3. Определить использование PKI Validator/PKI SDK.
4. Добавить trust report с кодами причин.

### P2: расширение CAdES

1. Профили CAdES-T и X Long Type 1 с TSP.
2. Настройка TSA/OCSP/Proxy без секретов в открытом виде.
3. Повышение уровня подписи и архивные timestamps.
4. Потоковые операции для больших документов.
5. Countersignature и несколько signer, если нужны бизнес-процессу.

### P2: production hardening

1. Защищённая файловая область и allowlist путей.
2. Подписываемый immutable input snapshot и хеш до/после операции.
3. Audit log и correlation ID.
4. Ограничения размера, времени и параллелизма.
5. Автоматические интеграционные тесты на Windows CI.
6. Подписывание самого Bridge code-signing сертификатом.

### P3: background service

Спроектировать отдельный Windows Service/worker. Не расширять текущий desktop Bridge скрытыми service режимами.
