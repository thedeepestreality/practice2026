@echo off
:: this is a comment
REM also a comment

echo 123
echo 345
echo %0 %1 %2
set var=goodbye
echo %var%
set /p user_in="enter: "
echo %user_in%
set /a str_sum=1+2
echo %str_sum%
set /a new_sum=str_sum+3
echo %new_sum%
if %new_sum%==6 (
    echo yes
) else (
    echo no
)

if exist user1.txt (echo exists) else not