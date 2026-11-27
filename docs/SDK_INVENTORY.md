# Инвентаризация CryptoPro SDK

## Источник SDK в репозитории

Локальная поставка документации и runtime installer хранится в `docs/pki_sdk_docs/`:

| Файл | Назначение |
|---|---|
| `cades.chm` | CAdES SDK API reference |
| `CpPkiSdk.chm` | PKI SDK API reference |
| `pkivalidator.chm` | PKI Validator API reference |
| `cadessdk_2.0.15273.msi` | CAdES SDK installer 2.0.15273 |

## SDK headers / libraries

На основе ранее предоставленного SDK package:

| Путь в SDK | Назначение |
|---|---|
| `SDK/include/cades.h` | CAdES C API |
| `SDK/include/ades-core.h` | ADES-типы и статусы |
| `SDK/include/cadescom.h` | COM API declarations, не используется текущим Bridge |
| `SDK/include/pkivalidator.h` | PKI Validator declarations |
| `SDK/lib/amd64/cades.lib` | x64 import library |
| `SDK/lib/cades.lib` | Win32 import library |
| `SDK/samples/cades_samples.zip` | Официальные C++ samples |

## Важные C API операции

- `CadesSignMessage` — создать CAdES сообщение.
- `CadesEnhanceMessage` — повысить выбранный signer.
- `CadesEnhanceMessageAll` — повысить все signer.
- `CadesVerifyMessage` / `CadesVerifyDetachedMessage` — проверить сообщение.
- `CadesFreeBlob` / `CadesFreeVerificationInfo` — освободить SDK результаты.

Примеры из официальной документации включают:
- `SimplifiedSignCadesBes`;
- `SimplifiedVerifyCadesBes`;
- `LowlevelSignDetachedCades`;
- `LowlevelVerifyCades`;
- `LowlevelEnhanceCadesBes`.

## Подтверждённые параметры enhancement

`CADES_SIGN_PARA` задаёт целевой тип, сертификат, hash OID, дополнительное хранилище, TSP connection, proxy и дополнительные OCSP URL. Дополнительные OCSP поля доступны начиная с SDK 2.00.13126.

Официальный simplified C++ sample повышения BES до X Long Type 1 использует:
- `CADES_SERVICE_CONNECTION_PARA`;
- `CADES_SIGN_PARA`;
- `CADES_ENHANCE_MESSAGE_PARA`;
- `CadesEnhanceMessage`;
- `CadesFreeBlob`.

См. [CADES_IMPLEMENTATION_SPEC](CADES_IMPLEMENTATION_SPEC.md).

## Runtime и разрядность

`cades.lib` импортирует `cades.dll`. SDK headers/import library не заменяют CAdES runtime и CryptoPro CSP. x64 сборка должна ссылаться на `lib/amd64/cades.lib`. Не смешивать Win32 и x64 компоненты.

Ранее указанный SDK root:

```text
C:\Program Files (x86)\Crypto Pro\SDK
```

## Лицензирование

Для профилей с timestamp и revocation evidence проверить лицензии CryptoPro TSP Client и OCSP Client на каждой целевой машине. Установленный CAdES SDK MSI сам по себе не подтверждает наличие runtime, CSP, TSP/OCSP лицензий или доступность служб.

## Важные ограничения

- CHM/MSI в репозитории являются локальным reference package; точный ABI проверять по `cades.h` из используемой сборки.
- Не копировать DLL из SDK произвольно.
- Фиксировать версии CSP, CAdES runtime, SDK headers/import library и драйверов.
- Не включать лицензии, PIN, секреты и закрытые ключи в репозиторий.
