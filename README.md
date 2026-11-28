# Medialog Sign CryptoPro

Единый сервис криптографического подписания документов на базе CryptoPro CSP и CAdES SDK для интеграции с Medialog.

## Цель продукта

Medialog подключается к одному **CryptoPro Signing Service API** в двух вариантах размещения:

- **Desktop:** клиент обращается к локальному endpoint на `localhost`.
- **Server-side:** доверенный клиент обращается к endpoint сервиса по HTTPS.

Это единый продукт, API и криптографическое ядро. Различаются endpoint, host deployment и security context. Desktop сценарий с USB-токеном/PIN может требовать интерактивный пользовательский agent: Windows-служба в Session 0 не должна рассчитывать на показ пользовательских диалогов.

## Обязательные профили подписи

До промышленного релиза необходимо реализовать и проверить:

- CAdES-BES;
- CAdES-T;
- CAdES-X Long Type 1.

Native Bridge реализует создание CAdES-BES и повышение результата до CAdES-T или CAdES-X Long Type 1 через `CadesEnhanceMessage`. Flutter Workbench позволяет выбрать профиль и необязательный TSP URL. Проверка принимает ожидаемый профиль и возвращает статус SDK и время signature timestamp. Реализация ещё требует сборки на Windows с установленным SDK 2.0.15273 и криптографических acceptance-тестов на реальных тестовых сертификатах, TSP и OCSP.

## Структура

- `app/` — Flutter-клиент.
- `native/` — C++ Native Bridge / криптографический слой.
- `docs/` — архитектура, API, безопасность, тестирование и roadmap.
- `docs/pki_sdk_docs/` — локальная официальная документация и дистрибутив CryptoPro SDK.

## Документация

Начните с [индекса документации](docs/INDEX.md), затем изучите:

- [Целевая архитектура и диаграммы](docs/ARCHITECTURE.md)
- [Roadmap до production](docs/ROADMAP.md)
- [Профили CAdES](docs/CADES_PROFILES.md)
- [Решения по CAdES API](docs/CADES_API.md)
- [SDK Inventory](docs/SDK_INVENTORY.md)
- [Windows Server](docs/WINDOWS_SERVER.md)

## Важные ограничения

- Среда разработки и целевая Windows-конфигурация должны быть проверены отдельно.
- Нужны подтверждённые версии и лицензии CryptoPro CSP, CAdES runtime/SDK, драйверов и дополнительных компонентов.
- Криптографическая проверка подписи не тождественна проверке доверия к цепочке, отзыва сертификата и timestamp.
- PIN-коды и закрытые ключи не должны передаваться через API или попадать в логи.
