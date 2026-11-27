# Решения по CAdES API

## Источник истины по SDK

В репозитории сохранена локальная поставка CryptoPro SDK в `docs/pki_sdk_docs/`:

- `cades.chm`
- `CpPkiSdk.chm`
- `pkivalidator.chm`
- `cadessdk_2.0.15273.msi`

Все новые вызовы, структуры, параметры и правила освобождения памяти необходимо сверять с этой поставкой. Если документация SDK и пример из Интернета расходятся, приоритет у документации поставленной версии. При реализации фиксировать версию SDK/runtime и точные разделы CHM, на основании которых выбран API.

## Выбранный API

Текущая версия использует simplified C API из `cades.h`, а не Browser plug-in и не COM Automation.

| Операция | Функция |
|---|---|
| Detached/attached signing (текущий BES) | `CadesSignMessage` |
| Attached verification | `CadesVerifyMessage` |
| Detached verification | `CadesVerifyDetachedMessage` |
| Освобождение результата подписи | `CadesFreeBlob` |
| Освобождение verification info | `CadesFreeVerificationInfo` |
| Освобождение decoded content | `CadesFreeBlob` |

## Текущий статус профилей

| Профиль | Статус |
|---|---|
| CAdES-BES | В исходниках есть attached/detached вызовы; сборка и испытания не подтверждены |
| CAdES-T | Не реализован |
| CAdES-X Long Type 1 | Не реализован |

Подробные требования и критерии приёмки: [CADES_PROFILES.md](CADES_PROFILES.md).

## Текущие структуры BES

Используемые структуры из `cades.h`:

- `CRYPT_SIGN_MESSAGE_PARA`: encoding, signer certificate, hash algorithm OID.
- `CADES_SIGN_PARA`: `dwCadesType = CADES_BES`, signer certificate, hash OID.
- `CADES_SIGN_MESSAGE_PARA`: связывает CryptoAPI signing parameters с CAdES parameters.

Текущий вызов:

```cpp
CadesSignMessage(
    &para,
    fDetachedSignature,
    1,
    rgpbToBeSigned,
    rgcbToBeSigned,
    &pSignedBlob);
```

Флаг `fDetachedSignature=TRUE` создаёт detached подпись; `FALSE` включает содержимое в signed message.

## Реализация CAdES-T и X Long Type 1

Не предполагать, что для этих профилей достаточно поменять `dwCadesType`. Необходимо:

1. Найти в локальных CHM точные разделы, описывающие создание и проверку каждого профиля.
2. Установить, используются ли отдельные функции upgrade/enhance, параметры TSA/TSP, OCSP/CRL и validation data.
3. Проверить ограничения версии SDK и runtime.
4. Зафиксировать сигнатуры, обязательные поля структур, владение памятью и коды ошибок в отдельной таблице реализации.
5. Реализовать только документированный SDK workflow.
6. Проверять созданную подпись тем же SDK и независимым валидатором.

## Hash OID mapping

Текущая реализация сопоставляет OID открытого ключа сертификата с хеш-OID:

| Public key OID | Hash OID | Семейство |
|---|---|---|
| `1.2.643.2.2.19` | `1.2.643.2.2.9` | GOST R 34.10-2001 / GOST R 34.11-94 |
| `1.2.643.7.1.1.1.1` | `1.2.643.7.1.1.2.2` | GOST R 34.10-2012-256 / GOST R 34.11-2012-256 |
| `1.2.643.7.1.1.1.2` | `1.2.643.7.1.1.2.3` | GOST R 34.10-2012-512 / GOST R 34.11-2012-512 |

Это ограничение первой версии. Набор алгоритмов должен быть согласован с политикой организации, сертификатом и установленной версией CSP/SDK.

## Проверка и trust report

Текущая реализация использует `CadesVerifyMessage` и `CadesVerifyDetachedMessage`, проверяя `CADES_VERIFY_SUCCESS`. Это нельзя считать полной независимой проверкой всех политик доверия без подтверждения параметров SDK.

В production VerificationReport должен раздельно фиксировать:

1. криптографическую целостность подписи и данных;
2. соответствие CAdES профилю;
3. срок действия сертификата на релевантный момент;
4. построение цепочки до доверенного корня;
5. статус отзыва OCSP/CRL;
6. timestamp/TSA и доверие к TSA;
7. долгосрочные validation evidence для X Long Type 1;
8. соответствие политике принимающей системы.

Статусы должны включать как минимум `valid`, `invalid`, `unknown`, `not_checked`, `not_applicable`. Недоступность OCSP/TSA не равна положительному результату проверки.

## Владение памятью

- Blob, возвращённый CAdES API, освобождается соответствующей функцией SDK, например `CadesFreeBlob`.
- `CADES_VERIFICATION_INFO` освобождается `CadesFreeVerificationInfo`.
- Не использовать `free`, `delete[]` или `LocalFree` для памяти, выделенной SDK.
- Для новых функций проверить ownership каждого выходного объекта в локальном CHM.
