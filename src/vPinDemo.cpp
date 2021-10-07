 #include "../Headers/vPinDemo.h"
 #include <Arduino.h>


 void vPinDemo(SSD1306Wire* display)
 {
   display->drawString(0, 13, String(vPin() * 3200 / 4095));
   display->display();
   delay(1000);
   display->clear();
   display->display();
 }
