

#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/test.h"
#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/vPinDemo.h"
#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/wifidraw.h"
#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/joystick.h"

#include "wifiLogo.cpp"
#include "wifi_ico.cpp"
//#include "joystick.cpp"
//#include "wifidraw.cpp"
//#include <Arduino.h>
#include "SSD1306Wire.h"
#include <SoftwareSerial.h>
//#include <iostream.h>
//#include <stdio.h>

SoftwareSerial modemSerial(16, 17); //SIM800L Tx & Rx is connected to esp32 16,17 respectively tx and rx

SSD1306Wire display(0x3c, 21, 22);  // i2c,sda,sck

void setup()
{
  delay(10);

  Serial.begin(115200);
  modemSerial.begin(9600);

  display.init();
  display.flipScreenVertically();
  display.clear();
  display.display();
}

void loop()
{
//  int tension = vPin();
  delay(20);

  //button();
  //if (button())
  //{
  //  // // display.drawXbm(64,  0,  8,  8,  wifi_ico_bits);
  // Serial.printf("voltage Pin %s %s\n", String(PANEL_PIN), String(vPin() * 3200 / 4095));
  //  vPinDemo(&display);
  //  delay(10);
  //}

 // xPin();
 // yPin();
 // Serial.printf("voltage xPin %s\n", String(xPin() * 100 / 4095));
 // Serial.printf("voltage yPin %s\n", String(yPin() * 100 / 4095));
 // int xplay= 
  display.setPixel(64+(xPin()-2047) * 128 / 4095,32+(yPin()-2047) * 64 / 4095);
//  Serial.printf("voltage Pin %s %s\n", String(PANEL_PIN), String(vPin() * 3200 / 4095));
  wifidraw(&display);
  display.display();
  delay(50);
    display.clear();

}