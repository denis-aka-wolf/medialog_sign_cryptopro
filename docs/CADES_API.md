# Решения по CAdES API

## Выбранный API

Текущая версия использует simplified C API из `cades.h`, а не Browser plug-in и не COM Automation.

| Операция | Функция |
|---|---|
| Detached/attached signing | `CadesSignMessage` |
| Attached verification | `CadesVerifyMessage` |
| Detached verification | `CadesVerifyDetachedMessage` |
| Освобождение результата подписи | `CadesFreeBlob` |
| Освобождение verification info | `CadesFreeVerificationInfo` |
| Освобождение decoded content | `CadesFreeBlob` |

## Подписание

Используемые структуры из `cades.h`:

- `CRYPT_SIGN_MESSAGE_PARA`: encoding, signer certificate, hash algorithm OID.
- `CADES_SIGN_PARA`: `dwCadesType = CADES_BES`, signer certificate, hash OID.
- `CADES_SIGN_MESSAGE_PARA`: связывает CryptoAPI signing parameters с CAdES parameters.

Функция:

```cpp
CadesSignMessage(
    &para,
    fDetachedSignature,
    1,
    rgpbToBeSigned,
    rgcbToBeSigned,
    &pSignedBlob);
```

Флаг `fDetachedSignature=TRUE` создаёт detached подпись; `FALSE` включает содержимое в signed message. Содержимое передаётся как один буфер.

### Hash OID mapping

Текущая реализация сопоставляет OID открытого ключа сертификата с хеш-OID:

| Public key OID | Hash OID | Семейство |
|---|---|---|
| `1.2.643.2.2.19` | `1.2.643.2.2.9` | GOST R 34.10-2001 / GOST R 34.11-94 |
| `1.2.643.7.1.1.1.1` | `1.2.643.7.1.1.2.2` | GOST R 34.10-2012-256 / GOST R 34.11-2012-256 |
| `1.2.643.7.1.1.1.2` | `1.2.643.7.1.1.2.3` | GOST R 34.10-2012-512 / GOST R 34.11-2012-512 |

Это явное ограничение первой версии. До использования необходимо сверить OID с политикой организации, сертификатом и установленной версией CSP. Неизвестный OID приводит к `UNSUPPORTED_KEY_ALGORITHM`.

## Проверка

Для attached:

```cpp
CadesVerifyMessage(&verifyPara, signerIndex, signedBlob,
                   signedBlobSize, &decodedContent, &verificationInfo);
```

Для detached:

```cpp
CadesVerifyDetachedMessage(&verifyPara, signerIndex,
    detachedSignature, detachedSignatureSize,
    contentCount, contentBuffers, contentSizes,
    &verificationInfo);
```

Текущая реализация проверяет signer index 0. В `CADES_VERIFICATION_PARA` задаёт `dwCadesType = CADES_BES`.

`valid` считается true только если API вернул TRUE и `verificationInfo->dwStatus == CADES_VERIFY_SUCCESS`. При неуспехе возвращается числовой `statusCode` и текстовое имя статуса, если статус известен.

## Статусы

В `cades.h` присутствуют, среди прочего:

- `CADES_VERIFY_SUCCESS`
- `CADES_VERIFY_BAD_SIGNATURE`
- `CADES_VERIFY_NO_CHAIN`
- `CADES_VERIFY_END_CERT_REVOCATION`
- `CADES_VERIFY_CHAIN_CERT_REVOCATION`
- `CADES_VERIFY_NO_VALID_SIGNATURE_TIMESTAMP`
- `CADES_VERIFY_NO_VALID_CADES_C_TIMESTAMP`
- `CADES_VERIFY_NO_VALID_ARCHIVE_TIMESTAMP`
- `CADES_VERIFY_UNSUPPORTED_ATTRIBUTE`
- `CADES_VERIFY_FAILED_POLICY`

Их точную семантику и зависимость от настроек SDK необходимо сверять с `cades.chm` именно той версии, которая установлена на целевой машине.

## Владение памятью

- Blob, возвращённый `CadesSignMessage` или `CadesVerifyMessage`, освобождается `CadesFreeBlob`.
- `CADES_VERIFICATION_INFO` освобождается `CadesFreeVerificationInfo`.
- Не использовать `free`, `delete[]` или `LocalFree` для памяти, выделенной CAdES SDK.
- Вызов освобождения выполняется и при ошибке последующей записи файла.

## Важное различие: подпись и доверие

Результат проверки CAdES зависит от параметров SDK и его политики. Нельзя сводить в UI все проверки к одной фразе «сертификат действителен».

Раздельно фиксировать:

1. криптографическая целостность подписи и данных;
2. наличие и корректность атрибутов CAdES;
3. срок действия сертификата на соответствующий момент;
4. построение цепочки до доверенного корня;
5. статус отзыва (OCSP/CRL);
6. проверка timestamp/TSP и доверия к TSA;
7. соответствие профилю и политике принимающей системы.

Для первой версии Bridge не публикует независимый детальный trust report. Это отдельная задача на базе PKI SDK/PKI Validator и параметров CAdES verification.
