/*  Software version: 0.1
 *   
 *  Software designed by Clifford Fowkes on January 26th 2021
 *  The purpose of this software is to create an auto-login dongle using the Seeeduino XIAO.
 *  circuit and final size still pending
 *  insta: flux_floof
 */
#include "Keyboard.h"
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  Keyboard.begin();
}

void loop(){ 
 {
  if (digitalRead(2) == LOW){     //checks if pin 2 is pulled low, if it is, continue
    delay(200);                   //wait for 0.2 seconds
    Keyboard.print("pin2");       //print out the word "pin2" - computer thinks someone is typing
    delay(100);                   //wait for 0.1 seconds
    Keyboard.write(KEY_RETURN);   //write the return, or enter key

    }
  else {
    Keyboard.releaseAll();        //if pin 2 is not pulled low, then release all keys (either does nothing, or stops the program looping.
  }
 }
 {
  if (digitalRead(1) == LOW){     //checks if pin 1 is pulled low, if it is, continue
    delay(200);                   //wait for 0.2 seconds
    Keyboard.print("pin1");       //print out the word "pin1" - computer thinks someone is typing
    delay(100);                   //wait for 0.1 seconds
    Keyboard.write(KEY_RETURN);   //write the return, or enter key

    }
  else {
    Keyboard.releaseAll();        //if pin 1 is not pulled low, then release all keys (either does nothing, or stops the program looping.
  }
 }
}
