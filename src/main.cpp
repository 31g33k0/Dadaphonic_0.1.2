

#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/test.h"
#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/vPinDemo.h"
#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/wifidraw.h"

#include "wifiLogo.cpp"
#include "wifi_ico.cpp"
//#include "wifidraw.cpp"
//#include <Arduino.h>
#include "SSD1306Wire.h"
#include <SoftwareSerial.h>
//#include <iostream.h>
//#include <stdio.h>

SoftwareSerial modemSerial(16, 17); //SIM800L Tx & Rx is connected to esp32 16,17 respectively tx and rx

SSD1306Wire display(0x3c, 21, 22);

void setup()
{
  //delay(100);

  Serial.begin(115200);
  modemSerial.begin(9600);

  display.init();
  display.flipScreenVertically();
  display.clear();
  //delay(100);
  display.display(); //.display();
}

void loop()
{
  int tension = vPin();
  delay(20);
  button();
  if (button())
  {
    // // display.drawXbm(64,  0,  8,  8,  wifi_ico_bits);
   Serial.printf("voltage Pin %s %s\n", String(PANEL_PIN), String(vPin() * 3200 / 4095));
    vPinDemo(&display);
    delay(200);
  }


  wifidraw(&display);
  display.display();
  delay(200);
}