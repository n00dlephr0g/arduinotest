#include "serial.h"

void initSerial()
{
    Serial.begin(9600);
}

void say(char* line)
{
    Serial.println(line);
};

