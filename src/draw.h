#ifndef functions_h
#define functions_h

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

#define OLED_ADDRESS 0x3C

#define w SSD1306_WHITE
#define b SSD1306_BLACK




void initDisplay();

Adafruit_SSD1306 getDisplay();

void test();

void drawProgressBar(char type, int width = 10, int height = 10, int topLeft = 0);

void point(int x, int y);


#endif