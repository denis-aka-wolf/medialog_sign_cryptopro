# Changelog

## Unreleased - CAdES implementation specification

- Добавлена техническая спецификация CAdES C API: BES signing, enhancement до T/X Long Type 1, verification и управление памятью.
- Зафиксирован pipeline BES → T/X Long Type 1 через `CadesEnhanceMessage`.
- Добавлены требования к TSP, OCSP, CRL, лицензиям и серверному security context.
- Roadmap дополнен отдельным этапом реализации и проверки всех профилей.
- Уточнено, что CAdES-X Long Type 1 не является CAdES-A.

## Unreleased - target architecture and production roadmap

- Зафиксирована концепция единого CryptoPro Signing Service API для Desktop (loopback) и Server-side (HTTPS).
- Добавлена целевая архитектура с Mermaid диаграммами контекста, компонентов, потоков подписания и security boundaries.
- Добавлен отдельный план реализации CAdES-BES, CAdES-T и CAdES-X Long Type 1.
- Обновлены README, индекс документации, roadmap, CAdES API, SDK inventory и Windows hosting.
- Устаревшая C#/.NET COM архитектура в lowercase `architecture.md` заменена ссылкой на актуальную схему.
- Зафиксировано, что Desktop user session и Windows Service имеют разные security contexts; единым остаётся криптографическое ядро и API.

## 0.1.0 - initial native bridge implementation preview

- Добавлен C++17 x64 process-per-request Bridge.
- Добавлены CAdES-BES detached/attached sign и verify вызовы.
- Добавлено перечисление сертификатов `CurrentUser\\MY`.
- Добавлены CMake и PowerShell build/smoke scripts.
- Добавлена документация архитектуры, API, протокола, сборки, безопасности, тестирования и Windows Server.
- Не выполнена фактическая сборка/проверка на Windows в среде подготовки.
