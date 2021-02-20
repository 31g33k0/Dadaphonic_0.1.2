 #include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/wifidraw.h"

//  #include "SSD1306Wire.h"

// display.

void wifidraw(SSD1306Wire* display) {
   display->drawCircleQuads(50,50,0,3);
   display->drawCircleQuads(50,50,3,3);
   display->drawCircleQuads(50,50,5,3);
   display->drawCircleQuads(50,50,7,3);
   display->display();
}