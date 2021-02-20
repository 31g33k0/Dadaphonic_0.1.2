

#include <Arduino.h>
#include <SoftwareSerial.h>

#ifndef __DISPLAY__
#include "SSD1306Wire.h"
#define __DISPLAY__
#endif

// //#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/src/config.conf"
#ifndef PANEL_PIN
#define PANEL_PIN 4
//#define panelPin 4  // put the first buttons here
#endif

#ifndef __MODEMSERIAL__
#define __MODEMSERIAL__
 // le mettre ici

#endif
// #ifndef DISPLAY_SSD1306
// #define DISPLAY_SSD1306
// #include "SSD1306Wire.h"
// #endif
// #ifndef DISPLAY_I2C_SDA_CLK
// #define DISPLAY_I2C_SDA_CLK
// SSD1306Wire display(0x3c, 21, 22);  //The screen I2C adress, sda, clk ---> think about making an i2c scanner
// #endif

// #include <Arduino.h>
// #include <SoftwareSerial.h>

// #ifndef PANEL_PIN
// #define PANEL_PIN
// int panelPin = (int);    // put the first buttons here
// #endif

// #ifndef UTILS
// #define UTILS

#ifndef TEST_H
#define TEST_H
bool button(void);
int vPin(void);
//void wifidraw(SSD1306Wire display);

#endif