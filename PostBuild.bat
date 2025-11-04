@echo off
setlocal

cd "%~1" || exit /b

mkdir "Binaries\Win64"

tar -xf "UE4Editor-PlanarCut.zip" -C "Binaries\Win64"

echo