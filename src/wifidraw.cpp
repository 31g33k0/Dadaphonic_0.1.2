 #include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/wifidraw.h"

int x_offset = 116;
int y_offset = 12;

void wifidraw(SSD1306Wire* display) {
   display->drawCircleQuads(x_offset,y_offset,0,3);
   display->drawCircleQuads(x_offset,y_offset,3,3);
   display->drawCircleQuads(x_offset,y_offset,5,3);
   display->drawCircleQuads(x_offset,y_offset,7,3);
   display->display();
}