# Решения по CAdES API

## Источник истины по SDK

Локальная поставка CryptoPro SDK находится в `docs/pki_sdk_docs/`:

- `cades.chm`
- `CpPkiSdk.chm`
- `pkivalidator.chm`
- `cadessdk_2.0.15273.msi`

Точные сигнатуры, структуры, параметры и ownership памяти сверяются с этой поставкой и заголовками, которые использует MSVC build. Официальная актуальная документация полезна как навигация, но не заменяет проверку конкретного SDK 2.0.15273.

## Выбранный API

Текущая версия использует simplified C API из `cades.h`, не COM Automation и не Browser plug-in.

| Операция | Функция |
|---|---|
| Attached/detached BES signing | `CadesSignMessage` |
| Повышение выбранного signer | `CadesEnhanceMessage` |
| Повышение всех signer | `CadesEnhanceMessageAll` |
| Attached verification | `CadesVerifyMessage` |
| Detached verification | `CadesVerifyDetachedMessage` |
| Проверка типа по атрибутам | `CadesMsgIsType` / `CadesMsgIsTypeEncoded` |
| Освобождение blob | `CadesFreeBlob` |
| Освобождение verification info | `CadesFreeVerificationInfo` |

## Текущий BES pipeline

В текущем коде используются:

- `CRYPT_SIGN_MESSAGE_PARA`;
- `CADES_SIGN_PARA` с `dwCadesType = CADES_BES`;
- `CADES_SIGN_MESSAGE_PARA`;
- `CadesSignMessage`.

Для attached/detached различается флаг detached, передаваемый в `CadesSignMessage`.

## Enhancement pipeline: T и X Long Type 1

SDK официально демонстрирует повышение BES до X Long Type 1 через simplified C API:

- `CADES_SERVICE_CONNECTION_PARA` содержит параметры подключения к TSP;
- `CADES_SIGN_PARA.dwCadesType` задаёт целевой профиль;
- `CADES_ENHANCE_MESSAGE_PARA` связывает ASN.1 encoding и `CADES_SIGN_PARA`;
- `CadesEnhanceMessage` обрабатывает выбранного signer;
- `CadesEnhanceMessageAll` может использоваться для всех signer.

Для CAdES-T задаётся `CADES_T`, для X Long Type 1 — `CADES_X_LONG_TYPE_1`. Проектный pipeline: создать BES через `CadesSignMessage`, затем повысить результат. Это позволяет не подписывать исходный документ закрытым ключом повторно.

Официальный C++ пример: [Enhance CAdES-BES to X Long Type 1](https://docs.cryptopro.ru/cades/reference/cadesc/cadesc-samples/samplesimplifiedapienhancecadesbes).

## Проверка профиля

`CADES_VERIFICATION_PARA.dwCadesType` задаёт ожидаемый профиль:

- `CADES_BES`;
- `CADES_T`;
- `CADES_X_LONG_TYPE_1`.

`CadesMsgIsType` / `CadesMsgIsTypeEncoded` проверяют только наличие профильных атрибутов и не заменяют криптографическую проверку. X Long Type 1 является частным случаем BES, поэтому успешная проверка типа BES не доказывает соответствие X Long Type 1.

Для X Long Type 1 SDK использует встроенные в подпись доказательства для проверки внутренней временной метки и цепочки; дополнительное хранилище в параметрах проверки применяется для внешнего timestamp.

## Важные параметры

`CADES_SIGN_PARA` содержит TSP connection, proxy, additional certificate store и дополнительные OCSP endpoint. В поставленной версии SDK поля дополнительных OCSP endpoint должны быть доступны (добавлены начиная с 2.00.13126), но компиляция всё равно должна подтвердить ABI и макросы заголовка.

Для серверных сценариев проверить `CADES_SKIP_IE_PROXY_CONFIGURATION` и условную доступность `dwFlags` через `CADES_PARA_HAS_EXTRA_FIELDS`. Не включать флаги, которых нет в фактически используемом заголовке.

## Hash OID mapping

Текущая реализация сопоставляет OID открытого ключа сертификата с hash OID:

| Public key OID | Hash OID | Семейство |
|---|---|---|
| `1.2.643.2.2.19` | `1.2.643.2.2.9` | GOST R 34.10-2001 / GOST R 34.11-94 |
| `1.2.643.7.1.1.1.1` | `1.2.643.7.1.1.2.2` | GOST R 34.10-2012-256 / GOST R 34.11-2012-256 |
| `1.2.643.7.1.1.1.2` | `1.2.643.7.1.1.2.3` | GOST R 34.10-2012-512 / GOST R 34.11-2012-512 |

Это ограничение первой версии. Набор алгоритмов должен быть согласован с сертификатом, политикой организации и установленной версией CSP/SDK.

## VerificationReport

Проверка должна раздельно фиксировать:

1. криптографическую целостность подписи и данных;
2. соответствие CAdES профилю;
3. срок действия сертификата на релевантный момент;
4. построение цепочки до доверенного корня;
5. статус отзыва OCSP/CRL;
6. timestamp/TSA и доверие к TSA;
7. долгосрочные validation evidence для X Long Type 1;
8. соответствие политике принимающей системы.

Использовать статусы `valid`, `invalid`, `unknown`, `not_checked`, `not_applicable`. Недоступность OCSP/TSA не равна положительному результату.

## Владение памятью

- Blob, возвращённый CAdES API, освобождается через `CadesFreeBlob`.
- `CADES_VERIFICATION_INFO` освобождается через `CadesFreeVerificationInfo`.
- Не использовать `free`, `delete[]` или `LocalFree` для памяти SDK.
- Для новых функций проверить ownership каждого выходного объекта в локальном CHM.


## Подтверждённый ABI локального SDK 2.0.15273

Проверены файлы `docs/pki_sdk_docs/SDK/include/cades.h` и `ades-core.h`. В заголовке подтверждены:

- `CADES_SERVICE_CONNECTION_PARA`: `dwSize`, `wszUri`, `pAuthPara`;
- `CADES_SIGN_PARA`: базовые поля TSP/proxy/store и условные дополнительные OCSP поля под `CADES_PARA_HAS_EXTRA_FIELDS`;
- `CADES_ENHANCE_MESSAGE_PARA`: `dwSize`, `dwMsgEncodingType`, `pCadesSignPara`;
- `CADES_VERIFICATION_PARA`: базовые поля и условный `dwFlags`;
- прототипы `CadesEnhanceMessage`, `CadesEnhanceMessageAll`, `CadesFreeBlob`.

Текущая конфигурация Native Bridge не определяет `CADES_PARA_HAS_EXTRA_FIELDS` и `CADES_PARA_HAS_EXTRA_TIME_FIELDS`. Поэтому optional поля, зависящие от этих макросов, не используются. В `native/src/main.cpp` добавлены x64 `static_assert` размеров четырёх структур, чтобы сборка остановилась при неожиданном изменении layout.

Реализация в исходниках: BES → T/X Long Type 1 enhancement, опциональный TSP URL, выбор ожидаемого профиля при проверке, извлечение signature timestamp. Не подтверждено до Windows build/run: реальный TSP/OCSP roundtrip, лицензирование, detached/attached совместимость enhancement и соответствие итоговых CMS независимому валидатору.
