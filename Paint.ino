//This DigiKeyboard Script downloads and sets a wallpaper through the Windows PowerShell. It has been tested successfully
//on Windows 10 and should probably work with Windows 7/8/8.1 etc.

#include "DigiKeyboard.h"

int buttonState1 = 0;  
int buttonState2 = 0;
int buttonState3 = 0;  
  

void setup() {
pinMode(0, INPUT);
pinMode(1, INPUT);
pinMode(2, INPUT);
}
void loop() {
  buttonState1 = digitalRead(0);
  buttonState2 = digitalRead(1);
  buttonState3 = digitalRead(2);
  if (buttonState1 == HIGH){
    DigiKeyboard.print("1");
  }
  if (buttonState2 == HIGH){
    DigiKeyboard.print("2");
  }
 if (buttonState3 == HIGH){
    DigiKeyboard.print("3");
  }
}
