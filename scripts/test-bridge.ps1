param(
    [Parameter(Mandatory = $false)]
    [string]$BridgeExe = (Join-Path (Split-Path -Parent $PSScriptRoot) 'native\build-x64\Release\cryptopro_native_bridge.exe')
)
$ErrorActionPreference = 'Stop'
if (-not (Test-Path $BridgeExe)) { throw "Bridge не найден: $BridgeExe. Сначала выполните scripts\build-bridge.ps1" }

function Invoke-Bridge([hashtable]$Request) {
    $json = $Request | ConvertTo-Json -Compress
    $json | & $BridgeExe
    if ($LASTEXITCODE -notin @(0, 1)) { throw "Bridge завершился с кодом $LASTEXITCODE" }
}

Write-Host '=== status ===' -ForegroundColor Cyan
Invoke-Bridge @{ action = 'status' }
Write-Host '=== list-certificates ===' -ForegroundColor Cyan
Invoke-Bridge @{ action = 'list-certificates' }
