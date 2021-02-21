//#include <Arduino.h>
#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/test.h"



int vPin(){// (int) au cas ou on a plusieurs panels, return analogRead du panel --> modifier panel pin en char[]
    return (analogRead(PANEL_PIN));
}

bool button() {
    bool button1 = false;

if (vPin()>=200){
  delay(10);
  if (vPin()>=200){
  button1 = true;
  }
}
/*else {
  button1 = false;
  }

  */
  return (button1);
}
