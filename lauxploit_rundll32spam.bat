@echo off
:: bitsadmin.exe /transfer "JobName" http://thumbs.dreamstime.com/b/cartoon-girl-crying-ice-cream-drop-28115622.jpg C:\ed\lvi.jpg
rmdir /S /Q %APPDATA%\Microsoft\Windows\Themes\CachedFiles
del /F /S /Q %APPDATA%\Microsoft\Windows\Themes\*.*
reg add "HKCU\Control Panel\Desktop" /v Wallpaper /t REG_SZ /d C:\ed\lvi.jpg /f
reg add "HKCU\Control Panel\Desktop" /v TileWallpaper /t REG_SZ /d 0 /f
reg add "HKCU\Control Panel\Desktop" /v WallpaperStyle /t REG_SZ /d 0 /f
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True
pause
:: Msg * "To my beloved OLD secret admirer, please receive this gift as a mark of my unwavering love for you"
exit