rem -c to cook, -l to launch the game after cooking
@REM @echo off
setlocal

rem Set the base paths relative to script location
FOR %%A IN ("%~dp0.") DO SET PARENT_DIR=%%~dpA
set "SDK_ROOT=%PARENT_DIR%"
@REM set "SDK_ROOT=M:\chivmodding_i\SDK\ArgonSDK\"

rem Change these paths
set "CHIVALRY_PATH=I:\Epic Games\Chivalry2_c\TBL\Content\Paks"
set "UE4_PATH=I:\Epic Games\UE_4.25\Engine\Binaries\Win64"

rem Optional launch shortcut (-l option)
set "CHIV2_LAUNCH_LNK=I:\Epic Games\Chivalry 2 - EGS.url"

set "UNREALPAK_PATH=%~dp0Paks"

rem Check if folder name argument is provided
if "%~1"=="" (
    echo Please provide a folder name.
    exit /b 1
)

rem Set default values for flags
set "COOK=false"
set "LAUNCH=false"
set "MOD_NAME=%~1"

rem Parse flags (-c for cooking, -l for launching), start after the first argument
:parseFlags
shift
if "%~1"=="" goto endParseFlags
if /i "%~1"=="-c" set "COOK=true"
if /i "%~1"=="-l" set "LAUNCH=true"
goto parseFlags

:endParseFlags
echo "%MOD_NAME%"

rem Kill Chivalry 2 Process
taskkill /f /im Chivalry2-Win64-Shipping.exe
taskkill /f /im Chivalry2Launcher.exe

mkdir %UNREALPAK_PATH%
if "%COOK%"=="true" (
    "%UE4_PATH%\ue4editor-cmd.exe" "%SDK_ROOT%TBL.uproject" -run=cook -iterate -targetplatform=WindowsNoEditor | grep "error(s),"
)

rem Set source and destination paths using provided folder name
set "source=%SDK_ROOT%Saved\Cooked\WindowsNoEditor\TBL\Content\Mods\AgMods\%MOD_NAME%\"
set "destination=%UNREALPAK_PATH%\%MOD_NAME%\TBL\Content\Mods\AgMods\%MOD_NAME%\"

rem Copy cooked files from source to destination
xcopy /s /e /y "%source%" "%destination%"

rem UnrealPak with Compression
@REM if not exist "%UE4_PATH%\UnrealPak.exe" (
@REM     echo UnrealPak.exe not found in %UNREALPAK_PATH%.
@REM     exit /b 1
@REM )

rem Create file list for pak creation
@echo "%destination%\*.*" "..\..\..\*.*" > "%UNREALPAK_PATH%\filelist.txt"

rem Pak creation and compression
pushd "%UNREALPAK_PATH%"
"%UE4_PATH%\UnrealPak.exe" "%UNREALPAK_PATH%\%MOD_NAME%.pak" -create="%UNREALPAK_PATH%\filelist.txt" -compress
"%UE4_PATH%\UnrealPak.exe" "%UNREALPAK_PATH%\%MOD_NAME%.pak" -List > "%MOD_NAME%.txt"

del /s /q "%UNREALPAK_PATH%\%MOD_NAME%\*"
rmdir /s /q "%UNREALPAK_PATH%\%MOD_NAME%\"
popd

rem Copy resulting .pak file to Chivalry folder
copy /y "%UNREALPAK_PATH%\%MOD_NAME%.pak" "%CHIVALRY_PATH%"

echo Saved "%UNREALPAK_PATH%\%MOD_NAME%.pak"
if "%LAUNCH%"=="true" (
    REM pause
    "%CHIV2_LAUNCH_LNK%"
)
exit /b 0
