# Roadmap до промышленного релиза

> Обязательный релизный объём: единый CryptoPro Signing Service API и три профиля CAdES: BES, T, X Long Type 1.
>
> SDK source of truth: `docs/pki_sdk_docs/`. Перед реализацией сверять API/ABI с CHM и заголовками SDK 2.0.15273.

## Целевой результат

- Один сервис и единый versioned API для Desktop и Server-side.
- Desktop клиент подключается к loopback endpoint.
- Server-side клиент подключается к тому же API по HTTPS.
- Общие Certificate Manager, CAdES Engine, Verification Engine, Operation Manager и Audit.
- Реализованы и проверены CAdES-BES, CAdES-T, CAdES-X Long Type 1.
- Подпись и доверие к PKI представлены раздельными результатами.
- Установщик, обновление, журналирование, тесты и документация готовы.

Архитектура: [ARCHITECTURE](ARCHITECTURE.md). Спецификация SDK: [CADES_IMPLEMENTATION_SPEC](CADES_IMPLEMENTATION_SPEC.md). Профили: [CADES_PROFILES](CADES_PROFILES.md).

## Текущее состояние исходников 0.1.0

### Реализовано в исходниках

- [x] C++17 x64 process-per-request Bridge.
- [x] Один JSON request на процесс.
- [x] `status` и поиск зарегистрированных CryptoPro providers.
- [x] Перечисление `CurrentUser\\MY`.
- [x] Сертификатный SHA-1 thumbprint lookup.
- [x] CAdES-BES attached/detached sign calls.
- [x] BES → CAdES-T / X Long Type 1 enhancement via `CadesEnhanceMessage`.
- [x] Profile selection in Flutter Workbench and JSON protocol.
- [x] Profile-aware attached/detached verification request and timestamp field extraction.
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

- [x] Считать `docs/pki_sdk_docs/` первичным локальным источником API reference.
- [x] Устранить конфликт старой документации C#/.NET COM и текущего C++ Native Bridge.
- [x] Зафиксировать единый API с loopback и remote HTTPS endpoints.
- [x] Добавить спецификацию pipeline BES → T/X Long Type 1.
- [x] Извлечь и зафиксировать ABI/typedef из локального `cades.h` 2.0.15273; добавить compile-time ABI guards.
- [ ] Зафиксировать TSP/OCSP endpoints и лицензионную модель.

## Этап 1. Сборка и проверка CAdES-BES

- [ ] Сборка Release x64 под MSVC.
- [ ] Проверка загрузки `cades.dll`, линковки и CSP.
- [ ] Диагностика сертификатов и фактического доступа к private key.
- [ ] Attached/detached BES.
- [ ] Проверка независимым валидатором.
- [ ] Тесты Cyrillic paths, лимитов файлов и ошибок токена.
- [ ] Зафиксировать версии Windows, CSP, CAdES SDK/runtime, драйверов и носителей.

**Выход:** воспроизводимая сборка и подтверждённый BES на целевом оборудовании.

## Этап 2. CAdES enhancement и профили T / X Long Type 1

- [x] Реализовать enhancement выбранного signer через `CadesEnhanceMessage` (SDK blob lifecycle вручную контролируется).
- [x] Реализовать BES → T.
- [x] Реализовать BES → X Long Type 1.
- [x] Добавить отдельную операцию upgrade существующего CMS для выбранного signer (T/X Long Type 1).
- [ ] Ввести общий RAII слой для всех SDK-owned ресурсов.
- [ ] Добавить `CadesEnhanceMessageAll` только при подтверждённом сценарии multi-signer.
- [x] Реализовать upgrade существующей подписи до T/X Long Type 1 через отдельную операцию.
- [ ] Добавить явные TSP/OCSP/proxy параметры и серверную конфигурацию.
- [ ] Проверить лицензии TSP Client / OCSP Client.
- [x] Добавить выбор ожидаемого профиля в verification API и извлечение signature timestamp.
- [ ] Расширить результат до полноценного VerificationReport с независимыми chain/revocation/policy decisions.
- [ ] Проверить attached/detached и независимый валидатор.

**Выход:** все три профиля реально создаются и проходят проверку.

## Этап 3. Единый Signing Service и API

- [ ] Перевести process-per-request Bridge в долгоживущий сервис с единым API.
- [ ] Transport Adapter для loopback и HTTPS.
- [ ] Единый Operation Manager: operationId, статусы, timeout, cancellation, получение результата.
- [ ] Аутентификация/авторизация, RBAC и политики профилей.
- [ ] Защита локального endpoint от нежелательных Origin/CSRF.
- [ ] Защита сетевого endpoint TLS и mTLS/Windows Authentication.
- [ ] Стабильные контракты Flutter/Medialog.
- [ ] Конкурентные запросы и graceful shutdown.

## Этап 4. Windows hosting и security context

- [ ] Desktop host в интерактивной пользовательской сессии для USB-токена/PIN.
- [ ] Проверить необходимость user-session broker/agent.
- [ ] Server host как Windows Service под выделенной service identity.
- [ ] Настроить доступ к сертификатам и key containers.
- [ ] Проверить CurrentUser/LocalMachine stores, HSM и token support.
- [ ] Исключить зависимость от интерактивного desktop в Session 0.
- [ ] Установщик, автозапуск, recovery, ACL и ротация логов.

## Этап 5. Certificate Manager и Verification Engine

- [ ] Полные свойства сертификата, Key Usage, EKU, алгоритмы, срок действия.
- [ ] Отдельно: private-key link, фактический доступ к ключу, пригодность для профиля.
- [ ] Структурированный VerificationReport.
- [ ] Раздельные integrity, profile, certificate, chain, revocation, timestamp, policy.
- [ ] PKI Validator/PKI SDK интеграция по локальному CHM.
- [ ] Строгая и диагностическая политики проверки.

## Этап 6. Production hardening

- [ ] Строгий JSON parser и schema validation.
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
- [ ] Выбор сертификата и профиля BES/T/X Long Type 1.
- [ ] Подписание и проверка артефакта.
- [ ] Возврат артефакта и VerificationReport.
- [ ] Сохранение operationId, documentId, хешей, профиля, сертификата, времени и результата.
- [ ] Audit trail и повторное получение результата.

## Этап 8. Выпуск и эксплуатация

- [ ] Установщик Desktop и Server профилей.
- [ ] Проверка prerequisites: CSP, CAdES runtime, TSP/OCSP licenses, драйверы.
- [ ] Обновление/откат и безопасное удаление.
- [ ] Диагностический пакет без секретов.
- [ ] Матрица совместимости и Release Manifest.
- [ ] Приёмка на Windows 10/11 и Windows Server раздельно.
- [ ] Runbook, troubleshooting и инструкции администратору/пользователю.

## Критерии Production

- [ ] Release x64 сборка воспроизводима.
- [ ] Версии CSP/SDK/runtime и лицензии зафиксированы.
- [ ] BES, T и X Long Type 1 реально создаются и проверяются.
- [ ] Проверены аппаратные токены, контейнеры и HSM.
- [ ] Криптографическая целостность отделена от доверия/отзыва/времени.
- [ ] Desktop localhost и Server HTTPS используют один API и одно ядро.
- [ ] Service identity, user context, PIN UX и доступ к ключам проверены.
- [ ] Интеграция Medialog и аудит завершены.
- [ ] Установщик, мониторинг, документация и приёмочный отчёт готовы.

> «Реализовано в исходниках» не равно «собрано», «протестировано» или «допущено в production».
