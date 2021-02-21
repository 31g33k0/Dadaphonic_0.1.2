#include <Arduino.h>
//#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/test.h"
#include "/home/chronominet/Documents/PlatformIO/Projects/Dadaphonic_0.1.2/Headers/joystick.h"

int xPin()
{
    return (analogRead(JOYSTICK_X));
}
int yPin()
{
    return (analogRead(JOYSTICK_Y));
}
int jClick()
{
    return (analogRead(JOYSTICK_BTN));
}

bool jButton()
{
    bool jButton = false;
    if (jClick() >= 200)
    {
        delay(10);
        if (jClick() >= 200)
        {
            jButton = true;
        }
    }
    return (jButton);
}
