# Матрица совместимости

| Компонент | Целевой вариант | Подтверждение |
|---|---|---|
| Windows client | Windows 10/11 x64 | Требуется фактический тест |
| Windows Server | 2019/2022/2025 x64 | Требуется отдельный тест каждой версии и сценария сессии |
| Native Bridge | MSVC x64, C++17 | Исходники подготовлены, компиляция не выполнена в этой среде |
| CryptoPro CSP | Совместимая x64 версия с лицензией | Версию зафиксировать по целевому серверу |
| CAdES runtime | x64, содержащий `cades.dll` | Установить штатным MSI, проверить версию |
| CryptoPro SDK | Заголовки `cades.h`, x64 `cades.lib` | Найдены в переданном SDK archive |
| Flutter | Windows Desktop | Тестер ранее подготовлен; финальный end-to-end тест обязателен |

## Release manifest

Для каждой тестовой и production сборки сохранять:

- Windows edition, build, architecture;
- CPU architecture;
- CryptoPro CSP product/version/build/license state;
- CAdES runtime product/version/build и путь `cades.dll`;
- SDK package version, header file version/date, import library architecture;
- Visual Studio version, MSVC toolset, Windows SDK, CMake;
- Bridge commit/version, SHA-256 exe;
- Flutter version и app build number;
- certificate issuer, serial, thumbprint (не private key data);
- тестовые сценарии и результаты независимой проверки.

Не фиксировать в manifest PIN, пароль контейнера, закрытый ключ или секреты.
