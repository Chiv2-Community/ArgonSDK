@echo off

REM Check if any arguments were passed
if "%~1"=="" (
    echo No folder was dragged and dropped. Exiting...
    pause
    exit /b
)
cd /d "%~dp0"
set "folder=%~1"
set folder=%folder:"=%

echo "Chivalry 2 directory: %folder%"
UnrealPak.exe "%folder%\TBL\Content\Paks\pakchunk0-WindowsNoEditor.pak" -list > ChivPAKFiles.txt
echo "Extracted file list: ChivPAKFiles.txt"


UnrealPak.exe -Extract "%folder%\TBL\Content\Paks\pakchunk0-WindowsNoEditor.pak" "%~dp0\Chivalry 2"

pause
