# Инвентаризация CryptoPro SDK

Основано на переданном `SDK.zip` и `pki_sdk_docs.zip`. Бинарные SDK и CHM файлы в исходный проект не копируются.

## Подтверждённые файлы

| Путь в SDK | Назначение |
|---|---|
| `SDK/include/cades.h` | CAdES C API, структуры и функции |
| `SDK/include/ades-core.h` | Базовые ADES-типы и статусы |
| `SDK/include/cadescom.h` | COM API declarations, не используется текущим Bridge |
| `SDK/include/pkivalidator.h` | COM declarations PKI Validator, не используется текущим Bridge |
| `SDK/lib/amd64/cades.lib` | x64 import library CAdES |
| `SDK/lib/cades.lib` | Win32 import library |
| `SDK/bin/cades-x64.msi` | x64 runtime installer |
| `SDK/bin/cades-win32.msi` | Win32 runtime installer |
| `SDK/bin/cadescom-x64.msi` | x64 CAdESCOM installer |
| `SDK/bin/cadescom-win32.msi` | Win32 CAdESCOM installer |
| `SDK/samples/cades_samples.zip` | Набор официальных C++ примеров |
| `SDK/help/pkivalidator.chm` | PKI Validator help |

В отдельном `pki_sdk_docs.zip` переданы `cades.chm`, `CpPkiSdk.chm`, `pkivalidator.chm`.

## Примеры, использованные при проектировании

- `SimplifiedSignCadesBes` — simplified CAdES-BES signing через `CadesSignMessage`.
- `SimplifiedVerifyCadesBes` — attached verify через `CadesVerifyMessage` и освобождение ресурсов.
- `LowlevelSignDetachedCades` — low-level detached signing pipeline.
- `LowlevelVerifyCades` / `LowlevelVerifyCadesBes` — низкоуровневая проверка.
- `LowlevelEnhanceCadesBes` — повышение уровня подписи и TSP usage.
- `SimplifiedSignCades`, `SimplifiedVerifyCades` — упрощённые CAdES сценарии.

## Ключевые подтверждённые объявления из `cades.h`

- `CadesSignMessage`
- `CadesVerifyMessage`
- `CadesVerifyDetachedMessage`
- `CadesFreeBlob`
- `CadesFreeVerificationInfo`

Структуры:

- `CADES_SIGN_PARA`
- `CADES_SIGN_MESSAGE_PARA`
- `CADES_VERIFICATION_PARA`
- `CADES_VERIFY_MESSAGE_PARA`
- `CADES_VERIFICATION_INFO`

## Runtime

`cades.lib` импортирует `cades.dll`. SDK headers/import library не заменяют runtime installer и CryptoPro CSP. Установленный на машине SDK root пользователя указан как:

```text
C:\Program Files (x86)\Crypto Pro\SDK
```

Сборка x64 должна ссылаться именно на `lib\\amd64\\cades.lib`. Не смешивать Win32 headers/libs/runtime с x64 процессом.

## Не включено

- SDK installers, import libraries, runtime DLL и CHM документация.
- CSP лицензии/ключи/сертификаты.
- Любые закрытые ключи и PIN.
