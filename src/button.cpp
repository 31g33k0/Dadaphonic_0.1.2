//#include <Arduino.h>
#include "../Headers/test.h"



int vPin(){// (int) au cas ou on a plusieurs panels, return analogRead du panel --> modifier panel pin en char[]
    return (analogRead(PANEL_PIN));
}

////////////////////////////////////////
bool button() {
    bool button1 = false;

if (vPin()>=2000){
  delay(10);
  if (vPin()>=2000){
  button1 = true;
  }
}
/*else {
  button1 = false;
  }
  //implement the reading of button1
  //I can read more than one button on the same gpio if i set it in analog and put different resistors --> build a small library for that
  */
  return (button1);
}