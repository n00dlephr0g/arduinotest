#include "draw.h"
#include "framebuffer.h"

Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void initDisplay()
{
    display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
};

Adafruit_SSD1306 getDisplay()
{
    return display;
}

void test()
{

};

void point(int x, int y)
{

}

