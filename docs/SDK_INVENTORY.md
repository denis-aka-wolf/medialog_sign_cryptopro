# Инвентаризация CryptoPro SDK

## Источник SDK в репозитории

Полный reference package, предоставленный для проекта, хранится в `docs/pki_sdk_docs/`:

| Файл | Назначение |
|---|---|
| `cades.chm` | CAdES SDK API reference |
| `CpPkiSdk.chm` | PKI SDK API reference |
| `pkivalidator.chm` | PKI Validator API reference |
| `cadessdk_2.0.15273.msi` | Дистрибутив CAdES SDK 2.0.15273 |

Эти файлы являются первичным источником для проверки точных сигнатур API, структур, параметров, статусов, владения памятью и ограничений версии. Не предполагать наличие функции только по примерам из другой версии SDK.

## SDK headers / libraries

На основе ранее предоставленного SDK package:

| Путь в SDK | Назначение |
|---|---|
| `SDK/include/cades.h` | CAdES C API, структуры и функции |
| `SDK/include/ades-core.h` | Базовые ADES-типы и статусы |
| `SDK/include/cadescom.h` | COM API declarations, не используется текущим Bridge |
| `SDK/include/pkivalidator.h` | PKI Validator declarations |
| `SDK/lib/amd64/cades.lib` | x64 import library CAdES |
| `SDK/lib/cades.lib` | Win32 import library |
| `SDK/samples/cades_samples.zip` | Примеры C++ |

## Примеры, использованные при проектировании

- `SimplifiedSignCadesBes` — simplified CAdES-BES signing через `CadesSignMessage`.
- `SimplifiedVerifyCadesBes` — attached verify через `CadesVerifyMessage`.
- `LowlevelSignDetachedCades` — low-level detached signing.
- `LowlevelVerifyCades` / `LowlevelVerifyCadesBes` — низкоуровневая проверка.
- `LowlevelEnhanceCadesBes` — пример повышения уровня подписи и TSP usage.

Перед использованием примеров сверить их с CHM и SDK runtime фактически установленной версии.

## Текущий Native Bridge API

- `CadesSignMessage`
- `CadesVerifyMessage`
- `CadesVerifyDetachedMessage`
- `CadesFreeBlob`
- `CadesFreeVerificationInfo`

Текущий код реализует вызовы BES attached/detached. CAdES-T и CAdES-X Long Type 1 остаются задачами реализации. Наличие в архиве примера enhance не означает, что соответствующий production workflow уже реализован.

## Runtime и разрядность

CAdES SDK headers/import library не заменяют CryptoPro CSP и установленный CAdES runtime. x64 сборка должна ссылаться на `lib/amd64/cades.lib`; не смешивать Win32 и x64 библиотеки или runtime. Использовать штатную установку CryptoPro и учитывать лицензионные условия.

Ранее указанный SDK root:

```text
C:\Program Files (x86)\Crypto Pro\SDK
```

## Ограничения и правила

- Не копировать DLL из SDK в приложение произвольно.
- Зафиксировать версии CSP, CAdES runtime, SDK headers/import library, драйверов и ОС в Release Manifest.
- Не включать в репозиторий лицензии, секреты, PIN, сертификаты с приватными данными или закрытые ключи.
- Для CAdES-T и X Long Type 1 документировать точные SDK функции и параметры после изучения локальных CHM.
