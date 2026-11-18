$ErrorActionPreference = 'Stop'
$ProjectRoot = Split-Path -Parent $PSScriptRoot
$NativeDir = Join-Path $ProjectRoot 'native'
$SdkRoot = 'C:\Program Files (x86)\Crypto Pro\SDK'
$BuildDir = Join-Path $NativeDir 'build-x64'

if (-not (Test-Path (Join-Path $SdkRoot 'include\cades.h'))) {
    throw "Не найден cades.h: $SdkRoot. Проверьте установку CryptoPro SDK."
}
if (-not (Test-Path (Join-Path $SdkRoot 'lib\amd64\cades.lib'))) {
    throw "Не найдена x64-библиотека cades.lib в $SdkRoot."
}

cmake -S $NativeDir -B $BuildDir -A x64 -DCRYPTOPRO_SDK_ROOT="$SdkRoot"
cmake --build $BuildDir --config Release

$Exe = Join-Path $BuildDir 'Release\cryptopro_native_bridge.exe'
if (-not (Test-Path $Exe)) { throw "Сборка завершилась без ожидаемого файла: $Exe" }
Write-Host "Bridge собран: $Exe" -ForegroundColor Green
