# Документация Medialog Sign CryptoPro

Документация рассчитана на открытие как vault/папки в Obsidian. Основные архитектурные документы используют Mermaid.

## Архитектура и проектирование

| Документ | Содержание |
|---|---|
| [[ARCHITECTURE]] | Целевая архитектура единого Signing Service, Desktop localhost и Server HTTPS, Mermaid диаграммы |
| [[ROADMAP]] | План от текущего Bridge до промышленного релиза |
| [[CADES_PROFILES]] | Обязательные профили CAdES-BES, CAdES-T и CAdES-X Long Type 1 |
| [[BRIDGE_PROTOCOL]] | Текущий JSON-протокол Native Bridge |
| [[CADES_API]] | Используемый CAdES C API, структуры, память и статусы |
| [[SDK_INVENTORY]] | Инвентаризация CryptoPro SDK и локальной документации |

## Реализация, безопасность и эксплуатация

| Документ | Содержание |
|---|---|
| [[BUILD_AND_INSTALL]] | Сборка, prerequisites и установка |
| [[SECURITY]] | Ключи, PIN, хранилища, права и угрозы |
| [[TESTING]] | Функциональные, негативные и интеграционные тесты |
| [[WINDOWS_SERVER]] | Windows Server, service identity, Session 0 и удалённый доступ |
| [[COMPATIBILITY_MATRIX]] | Платформы, CSP/SDK и release manifest |
| [[RELEASE_CHECKLIST]] | Контрольный список выпуска |
| [[TROUBLESHOOTING]] | Диагностика |
| [[CHANGELOG]] | История изменений |

## SDK reference package

Оригинальная документация и поставка SDK находятся в [[pki_sdk_docs/|docs/pki_sdk_docs]]:

- `cades.chm` — CAdES SDK API reference.
- `CpPkiSdk.chm` — PKI SDK API reference.
- `pkivalidator.chm` — PKI Validator API reference.
- `cadessdk_2.0.15273.msi` — сохранённый дистрибутив SDK.

Для точных сигнатур, структур, параметров и ownership памяти приоритет имеет именно эта локальная поставка SDK, а не примеры из других версий.

## Статус документации

Документы различают:
- реализовано в исходниках;
- собрано;
- проверено на конкретной конфигурации;
- принято для production.

Нельзя считать функцию production-ready только на основании наличия вызова API в исходниках.
