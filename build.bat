@echo off
rem Build program

setlocal
set CC=cl.exe

%CC% -nologo -Fe%1 %2
