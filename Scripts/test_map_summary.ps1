param(
    [Parameter(Mandatory = $true)]
    [string]$EngineRoot,
    [string]$SdkRoot = (Split-Path -Parent $PSScriptRoot)
)
$ErrorActionPreference = 'Stop'
$editor = Join-Path $EngineRoot 'Engine/Binaries/Win64/UE4Editor-Cmd.exe'
$project = Join-Path $SdkRoot 'TBL.uproject'
$output = Join-Path $SdkRoot 'Saved/Automation/MapSummary'
foreach ($required in @($editor, $project)) {
    if (-not (Test-Path -LiteralPath $required -PathType Leaf)) {
        throw "Missing required file: $required"
    }
}
New-Item -ItemType Directory -Force -Path $output | Out-Null
foreach ($test in @('Save', 'Reload', 'Isolation')) {
    $log = [IO.Path]::GetFullPath((Join-Path $output "$test.log"))
    # Reload must run in a separate process to avoid returning resident objects.
    & $editor $project -nullrhi -unattended -nosplash -nosound -nop4 `
        "-ExecCmds=Automation RunTests ArgonSDK.MapSummary.$test" `
        '-TestExit=Automation Test Queue Empty' "-abslog=$log"
    if ($LASTEXITCODE -ne 0 -or
        -not (Select-String -LiteralPath $log -SimpleMatch "Result={Passed} Name={$test} Path={ArgonSDK.MapSummary.$test}")) {
        throw "Map summary test $test failed; see $log"
    }
    Write-Output "PASS: ArgonSDK.MapSummary.$test"
}
