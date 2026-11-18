# Сборка и установка

## Требования

- Windows 10/11 x64 для разработки.
- Visual Studio 2022, workload **Desktop development with C++**.
- Windows 10/11 SDK.
- CMake 3.24 или новее.
- CryptoPro CSP соответствующей разрядности и лицензия.
- CryptoPro CAdES SDK x64: `include\\cades.h`, `lib\\amd64\\cades.lib`.
- CAdES runtime x64, установленный штатным установщиком SDK.
- Flutter SDK для сборки Workbench.

## Проверка SDK

Убедитесь, что доступны:

```text
C:\Program Files (x86)\Crypto Pro\SDK\include\cades.h
C:\Program Files (x86)\Crypto Pro\SDK\lib\amd64\cades.lib
```

Для runtime проверьте установку CAdES x64 и наличие `cades.dll` в системных путях загрузки. Не копируйте DLL наугад из SDK в каталог приложения: используйте штатный installer и согласованную модель deployment CryptoPro.

## Сборка Bridge

Из корня проекта:

```powershell
.\scripts\build-bridge.ps1
```

Скрипт создаёт x64 конфигурацию Visual Studio через CMake и собирает Release. Выходной файл:

```text
native\build-x64\Release\cryptopro_native_bridge.exe
```

Ручная конфигурация:

```powershell
cmake -S .\native -B .\native\build-x64 -A x64 `
  -DCRYPTOPRO_SDK_ROOT="C:/Program Files (x86)/Crypto Pro/SDK"
cmake --build .\native\build-x64 --config Release
```

Не использовать Win32 target для этого проекта. Не смешивать `lib\\cades.lib` с `lib\\amd64\\cades.lib`.

## Smoke test

```powershell
.\scripts\test-bridge.ps1
```

Ожидаются JSON ответы для `status` и `list-certificates`. Если `cades.dll` отсутствует, процесс может не стартовать ещё до выполнения команды `status`, потому что DLL является импортной зависимостью `cades.lib`.

## Flutter Workbench

```powershell
cd app
flutter create --platforms=windows .
flutter pub get
flutter run -d windows
```

В поле пути Bridge указать абсолютный путь к exe. Workbench должен запускаться под тем же Windows account, где находятся сертификат и закрытый ключ.

## Установка на целевую машину

1. Установить совместимую версию CryptoPro CSP x64 и проверить лицензию.
2. Установить CAdES runtime x64 штатным MSI.
3. Установить сертификат и связанный закрытый ключ в нужное хранилище/контейнер.
4. Проверить права текущего пользователя на закрытый ключ или токен.
5. Развернуть Bridge и Flutter приложение.
6. Выполнить smoke test и подписать только тестовый документ.
7. Проверить подпись независимым валидатором и принимающей системой.

Версии CSP, CAdES runtime, SDK headers/import library и архитектура должны быть зафиксированы в release manifest. Нельзя обновлять один компонент без регрессионной проверки.
