@echo on
set JAVA="C:\MCHP\mplab\MPLABX\v5.50\sys\java\zulu8.40.0.25-ca-fx-jre8.0.222-win_x64\bin\java.exe"

set H3=C:\MCHP\mplab\Harmony3\
set PRJ="%cd%/firmware/src/config/lcdc_rgba8888_mxt_9x60_wvga_iar/lcdc_rgba8888_mxt_9x60_wvga_iar.mhc"

cd /D %H3%\mhc\

@echo on

%JAVA% -jar mhc.jar  -mode=gui  -fw=%H3% -c=%PRJ%

pause

