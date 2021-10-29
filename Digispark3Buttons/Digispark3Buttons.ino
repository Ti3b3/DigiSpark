#include "DigiKeyboard.h"

//3 different variables for the buttons
int buttonState1 = 0;  
int buttonState2 = 0;
int buttonState3 = 0;  
  

void setup() {
//Set the 3 buttons as inputs change port if you use different ports
pinMode(0, INPUT);
pinMode(1, INPUT);
pinMode(2, INPUT);
}
void loop() {
  //Read the button states 
  buttonState1 = digitalRead(0);
  buttonState2 = digitalRead(1);
  buttonState3 = digitalRead(2);

  //Check if the button states are true or false  
  if (buttonState1 == HIGH){
    //Call the function 
    Button1Function();
  }
  if (buttonState2 == HIGH){
    //Call the function 
    Button2Function();
  }
  if (buttonState3 == HIGH){
    //Call the function 
    Button3Function();
  }
}

void Button1Function(){
  //Here you put what you want to execute
}
void Button2Function(){
 //Here you put what you want to execute
}
void Button3Function(){
  //Here you put what you want to execute
}
