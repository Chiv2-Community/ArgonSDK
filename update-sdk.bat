@echo off
setlocal enabledelayedexpansion

:: Check if git is installed
where git >nul 2>nul
if %ERRORLEVEL% neq 0 (
    echo Git is not installed or not in PATH
    echo Please install Git from https://git-scm.com/downloads
    echo.
    pause
    exit /b 1
)

:: Store current directory
set "CURRENT_DIR=%CD%"

echo Checking Git repository...
if not exist ".git" (
    echo Error: Not a git repository
    echo Please run this script from the root of a git repository. If you downloaded a ZIP file from GitHub, please download the zip from https://unchained.wang/argonSDK_readme.html instead.
    echo.
    pause
    exit /b 1
)

echo.
echo Pulling latest changes...
git pull
if %ERRORLEVEL% neq 0 (
    echo Error during git pull
    echo.
    pause
    exit /b 1
)

echo.
echo Initializing and updating submodules...
git submodule init
if %ERRORLEVEL% neq 0 (
    echo Error initializing submodules
    echo.
    pause
    exit /b 1
)

git submodule update --recursive
if %ERRORLEVEL% neq 0 (
    echo Error updating submodules
    echo.
    pause
    exit /b 1
)

echo.
echo All operations completed successfully!
echo.
pause