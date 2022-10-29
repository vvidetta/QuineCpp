@echo off
rem Execution environment for quine

setlocal
set INPUT=%1
set OUT_EXE=.\quine.exe

@call build.bat %OUT_EXE% %INPUT% > NUL 2>&1
%OUT_EXE%

endlocal
