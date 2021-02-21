 #include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/vPinDemo.h"
 #include <Arduino.h>


 void vPinDemo(SSD1306Wire* display)
 {
   display->drawString(0, 0, String(vPin() * 3200 / 4095));
   display->display();
  // delay(1000);
  // display->clear();
  // display->display();
 }
