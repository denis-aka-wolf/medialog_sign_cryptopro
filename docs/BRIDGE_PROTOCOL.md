# JSON-протокол Native CryptoPro Bridge

## Транспорт

Каждый вызов — отдельный процесс `cryptopro_native_bridge.exe`. Принимается ровно одна JSON-строка размером не более 1 МиБ; дублирующиеся ключи верхнего уровня и дополнительные строки отклоняются.

1. Клиент запускает процесс без shell.
2. Передаёт один UTF-8 JSON объект одной строкой в stdin.
3. Закрывает stdin.
4. Читает stdout до завершения процесса.
5. Разбирает один JSON envelope.

`stdout` зарезервирован под JSON. Не выводить туда сообщения сборки, отладку или логи. Диагностика, если понадобится, направляется в `stderr`.

## Envelope

Успех:

```json
{"ok":true,"action":"status","data":{"bridgeVersion":"0.1.0"}}
```

Ошибка:

```json
{"ok":false,"action":"sign-detached","error":{"code":"CERTIFICATE_NOT_FOUND","message":"..."}}
```

## Команды

### `status`

Request:

```json
{"action":"status"}
```

Response data включает `bridgeVersion`, `architecture`, `cadesDllLoaded`, `cryptoProProviders`, `cryptoProProviderCount`. Это диагностика загрузки CAdES runtime и регистрации провайдера, а не полный self-test CSP.

### `list-certificates`

Request:

```json
{"action":"list-certificates"}
```

Response:

```json
{
  "certificates": [{
    "thumbprint":"SHA1_HEX",
    "subjectName":"Certificate subject",
    "issuerName":"Certificate issuer",
    "serialNumber":"SERIAL_HEX",
    "validFrom":"2026-01-01T00:00:00Z",
    "validTo":"2027-01-01T00:00:00Z",
    "hasPrivateKey":true,
    "dateRangeValid":true,
    "isReadyForSigning":true
  }]
}
```

Перечисляется только `CurrentUser\\MY` для пользователя, от имени которого запущен Bridge. `hasPrivateKey` означает наличие свойства связи с ключом, а не успешную проверку доступа к токену/ключу.

### `sign-detached`

```json
{
  "action":"sign-detached",
  "inputPath":"C:\\CryptoProTest\\document.pdf",
  "outputPath":"C:\\CryptoProTest\\document.pdf.p7s",
  "thumbprint":"SHA1_HEX",
  "profile":"CAdES-T",
  "tspUrl":"https://tsa.example.test"
}
```

Поле `profile` необязательно: `CAdES-BES` (по умолчанию), `CAdES-T` или `CAdES-X Long Type 1`. Для T/X Long Type 1 Bridge сначала создаёт BES, затем вызывает `CadesEnhanceMessage` для повышения профиля. Необязательное поле `tspUrl` задаёт TSP endpoint; если оно отсутствует, используются настройки CryptoPro SDK. Результат data: `outputPath`, `signatureFormat`, `requestedProfile`, `detached`, `bytesWritten`.

### `sign-attached`

Те же поля, `action` меняется на `sign-attached`. Подписанное сообщение содержит исходные данные. Поддерживаются те же профили и необязательный `tspUrl`.

### `verify-detached`

```json
{
  "action":"verify-detached",
  "inputPath":"C:\\CryptoProTest\\document.pdf",
  "signaturePath":"C:\\CryptoProTest\\document.pdf.p7s",
  "profile":"CAdES-T"
}
```

Поле `profile` необязательно и задаёт ожидаемый профиль (по умолчанию BES). Результат data: `valid`, `apiSucceeded`, `requestedProfile`, `statusCode`, `status`, `signerSubject`, `signingTime`, `signatureTimeStampTime`, а при API error — `win32Error`.

### `verify-attached`

```json
{
  "action":"verify-attached",
  "inputPath":"C:\\CryptoProTest\\document-attached.p7s",
  "profile":"CAdES-X Long Type 1"
}
```

Для attached сообщения `inputPath` указывает на сам файл подписи/контейнер. Если проверка успешна, `CadesVerifyMessage` также возвращает декодированное содержимое, которое текущий Bridge освобождает, но не записывает отдельным файлом.

## Коды ошибок

| Код | Значение |
|---|---|
| `INVALID_JSON` | Некорректный JSON |
| `INVALID_UTF8` | Некорректная UTF-8 строка |
| `REQUEST_TOO_LARGE` | JSON-запрос превышает 1 МиБ |
| `ACTION_REQUIRED` | Нет action |
| `UNKNOWN_ACTION` | Неизвестная команда |
| `PATH_REQUIRED` | Не хватает путей |
| `INPUT_OUTPUT_PATH_COLLISION` | Входной и выходной пути совпадают |
| `CERT_STORE_OPEN_FAILED` | Не открылось хранилище CurrentUser\\MY |
| `CERTIFICATE_THUMBPRINT_REQUIRED` | Не указан thumbprint |
| `CERTIFICATE_NOT_FOUND` | Сертификат не найден |
| `PRIVATE_KEY_NOT_LINKED` | У сертификата нет связи с закрытым ключом |
| `UNSUPPORTED_KEY_ALGORITHM` | Не поддержан OID открытого ключа |
| `INPUT_FILE_OPEN_FAILED` | Не удалось открыть входной файл |
| `INPUT_FILE_READ_FAILED` | Ошибка чтения |
| `FILE_TOO_LARGE` | Превышен лимит 4 GiB |
| `CADES_SIGN_FAILED` | CAdES signing API завершился ошибкой |
| `CADES_ENHANCE_FAILED` | Не удалось повысить BES до запрошенного профиля |
| `UNSUPPORTED_CADES_PROFILE` | Запрошен неподдерживаемый профиль |
| `INVALID_TSP_URL` | TSP URL не является HTTP(S) URL |
| `EMPTY_SIGNATURE` | Файл подписи пуст |
| `OUTPUT_FILE_*` | Ошибка создания/записи/перемещения результата |

## Версионирование

Любое изменение полей команды/ответа должно сопровождаться обновлением этой документации и Dart-клиента. Для несовместимых изменений вводить `protocolVersion` в envelope, не переиспользовать прежнее поле с новой семантикой.

## Безопасность протокола

Не добавлять в протокол PIN, пароль контейнера, экспорт ключа или произвольную команду оболочки. Не записывать JSON запросы целиком в production logs, если в будущем появятся персональные данные или пути с чувствительными именами.
