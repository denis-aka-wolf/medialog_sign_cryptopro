# Roadmap до промышленного релиза

> Обязательный релизный объём: единый CryptoPro Signing Service API и три профиля CAdES: BES, T, X Long Type 1.
>
> SDK source of truth: `docs/pki_sdk_docs/`. Перед реализацией сверять точные API, структуры и коды ошибок с CHM из этой поставки. Наличие SDK-файлов в репозитории не означает, что runtime установлен, лицензирован или проверен.

## Целевой результат

- Один сервис и единый versioned API для Desktop и Server-side.
- Desktop клиент подключается к loopback endpoint.
- Server-side клиент подключается к тому же API по HTTPS.
- Общие Certificate Manager, CAdES Engine, Verification Engine, Operation Manager и Audit.
- Реализованы и проверены CAdES-BES, CAdES-T, CAdES-X Long Type 1.
- Подпись и доверие к PKI представлены раздельными результатами.
- Установщик, обновление, журналирование, тесты и документация готовы.

Архитектурная схема: [Целевая архитектура](ARCHITECTURE.md). Профили подписи: [CAdES Profiles](CADES_PROFILES.md).

## Текущее состояние исходников 0.1.0

### Реализовано в исходниках

- [x] C++17 x64 консольный Bridge skeleton.
- [x] Один JSON request на процесс.
- [x] `status` и поиск зарегистрированных CryptoPro providers.
- [x] Перечисление `CurrentUser\\MY`.
- [x] Сертификатный SHA-1 thumbprint lookup.
- [x] CAdES-BES attached/detached sign calls.
- [x] Attached/detached verify calls.
- [x] Освобождение CAdES blobs/verification info.
- [x] CMake x64 project и PowerShell build/smoke scripts.
- [x] Документация и SDK reference package в `docs/pki_sdk_docs/`.

### Не подтверждено

- [ ] Компиляция C++ проекта MSVC x64.
- [ ] Запуск на Windows с установленным CAdES runtime.
- [ ] Подписание реальным CSP ключом/токеном.
- [ ] Независимая проверка реальных BES артефактов.
- [ ] Совместимость с целевой Medialog/Нетрica системой.
- [ ] Работа на Windows Server и в Session 0.
- [ ] Соответствие конкретной поставке SDK и лицензии.

## Этап 0. Документация и фиксация архитектуры

- [ ] Считать `docs/pki_sdk_docs/` первичным локальным источником API reference.
- [ ] Устранить конфликт старой документации C#/.NET COM и текущего C++ Native Bridge.
- [ ] Привести README, ссылки, имена файлов и пути к актуальной структуре.
- [ ] Утвердить единую архитектуру API с loopback и remote HTTPS endpoints.
- [ ] Зафиксировать security context, токены, PIN UX, service identity и Windows Session 0.
- [ ] Описать API versioning, operationId, ошибки и VerificationReport.

**Выход:** согласованная архитектура и документация Obsidian без противоречивых инструкций.

## Этап 1. Сборка и проверка CAdES-BES

- [ ] Сборка Release x64 под MSVC.
- [ ] Проверка загрузки `cades.dll`, линковки и CSP.
- [ ] Диагностика сертификатов и реального доступа к private key.
- [ ] Attached/detached BES.
- [ ] Проверка независимым валидатором.
- [ ] Тесты Cyrillic paths, больших файлов в пределах лимита и ошибок токена.
- [ ] Записать точные версии Windows, CSP, CAdES SDK/runtime, драйверов и носителей.

**Выход:** воспроизводимая сборка и подтверждённый BES на целевом оборудовании.

## Этап 2. Единый Signing Service и API

- [ ] Перевести процессную модель Bridge в долгоживущий сервис с единым API.
- [ ] Реализовать Transport Adapter для loopback и HTTPS.
- [ ] Единый Operation Manager: operationId, статусы, таймауты, отмена, повторный запрос результата.
- [ ] Аутентификация и авторизация клиентов, RBAC и политики профилей.
- [ ] Защита от CSRF/нежелательных Origin для локального endpoint.
- [ ] Защита сетевого endpoint TLS и mTLS/Windows Authentication.
- [ ] Стабильные контракты для Flutter/Medialog.
- [ ] Проверка конкурентных запросов и graceful shutdown.

**Выход:** клиент меняет только endpoint и credentials; криптографический код общий.

## Этап 3. Windows hosting и security context

- [ ] Desktop host в интерактивной пользовательской сессии для сценариев USB-токена и PIN.
- [ ] Проверить необходимость user-session broker/agent для PIN UI.
- [ ] Server host как Windows Service под выделенной service identity.
- [ ] Настроить доступ service identity к сертификатам и key containers.
- [ ] Проверить CurrentUser/LocalMachine stores, HSM и USB token support.
- [ ] Исключить зависимость от интерактивного desktop в Session 0.
- [ ] Установщик, автозапуск, recovery, ACL и ротация логов.

**Выход:** подтверждены оба профиля подключения на реальных Windows конфигурациях.

## Этап 4. Certificate Manager и Verification Engine

- [ ] Полные свойства сертификата, Key Usage, EKU, алгоритмы, срок действия.
- [ ] Отдельно: private-key link, фактический доступ к ключу, пригодность для профиля.
- [ ] Структурированный VerificationReport.
- [ ] Отдельные статусы integrity, CAdES profile, certificate, chain, revocation, timestamp, policy.
- [ ] PKI Validator/PKI SDK интеграция по локальному CHM.
- [ ] Строгая и диагностическая политики проверки.

**Выход:** система объясняет не только «подпись корректна», но и почему сертификату доверяют или не доверяют.

## Этап 5. Полная реализация CAdES профилей

### 5.1 CAdES-BES
- [ ] Завершить attached/detached сценарии.
- [ ] Проверить атрибуты и OID по SDK.
- [ ] Независимая проверка и негативные тесты.

### 5.2 CAdES-T
- [ ] Реализовать штатный SDK механизм signature timestamp.
- [ ] Конфигурация TSA, timeout, proxy и политика обязательности timestamp.
- [ ] Проверка TSA response, сертификата TSA и цепочки.
- [ ] Возврат timestamp details в VerificationReport.

### 5.3 CAdES-X Long Type 1
- [ ] Сверить точную семантику и поддерживаемые операции по локальной SDK документации.
- [ ] Добавление всех evidence, требуемых SDK для X Long Type 1.
- [ ] Получение и проверка сертификатных/ревокационных данных.
- [ ] Проверка временной привязки и timestamp.
- [ ] Отказ выдавать профиль X Long Type 1 при неполных или недостоверных evidence.
- [ ] Проверка долгосрочной валидации после истечения сертификата.

**Выход:** каждый профиль создаётся и проверяется на целевой версии SDK, включая негативные сценарии и независимый валидатор.

## Этап 6. Production hardening

- [ ] Строгий JSON parser и проверка схемы.
- [ ] Ограничение размера запроса во время чтения.
- [ ] Лимиты размера файлов, потоковая обработка где поддерживается.
- [ ] Защищённая рабочая область, ACL, защита от reparse point и TOCTOU.
- [ ] Безопасные временные файлы, атомарная запись, политика overwrite.
- [ ] SHA-256 исходного и итогового артефактов.
- [ ] Ограничения параллелизма, timeout, cancellation и восстановление после извлечения токена.
- [ ] Audit с correlationId/operationId без PIN и секретов.
- [ ] Code signing исполняемых файлов и установщика.
- [ ] Security review и Windows CI.

## Этап 7. Интеграция Medialog

- [ ] Выбор документа в Medialog.
- [ ] Передача документа в Signing Service.
- [ ] Выбор сертификата.
- [ ] Подписание с выбором профиля BES/T/X Long Type 1.
- [ ] Верификация созданного артефакта.
- [ ] Возврат артефакта и VerificationReport.
- [ ] Сохранение operationId, documentId, хешей, профиля, сертификата, времени и результата.
- [ ] Audit trail и повторное получение результата.

## Этап 8. Выпуск и эксплуатация

- [ ] Установщик Desktop и Server профилей.
- [ ] Проверка prerequisites: CSP, CAdES runtime, лицензии, драйверы, TSA/OCSP.
- [ ] Обновление/откат и безопасное удаление.
- [ ] Диагностический пакет без секретов.
- [ ] Матрица совместимости и Release Manifest.
- [ ] Приёмка на Windows 10/11 и Windows Server (раздельно).
- [ ] Инструкции администратору и пользователю, runbook и troubleshooting.

## Критерии Production

- [ ] Release x64 сборка воспроизводима.
- [ ] Точные версии CSP/SDK/runtime зафиксированы и лицензирование подтверждено.
- [ ] BES, T и X Long Type 1 реально создаются и проверяются.
- [ ] Проверены аппаратные токены, контейнеры и HSM согласно целевым сценариям.
- [ ] Криптографическая целостность отделена от доверия/отзыва/времени.
- [ ] Desktop localhost и Server HTTPS используют один API и одно ядро.
- [ ] Service identity, user context, PIN UX и доступ к ключам проверены.
- [ ] Интеграция Medialog и аудит завершены.
- [ ] Установщик, мониторинг, документация и приёмочный отчёт готовы.

> Важно: отметка «реализовано в исходниках» не равна «собрано», «протестировано» или «допущено в production».
