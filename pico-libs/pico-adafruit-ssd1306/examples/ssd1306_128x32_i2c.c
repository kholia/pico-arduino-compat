/**************************************************************************
 This is an example for our Monochrome OLEDs based on SSD1306 drivers

 Pick one up today in the adafruit shop!
 ------> http://www.adafruit.com/category/63_98

 This example is for a 128x32 pixel display using I2C to communicate
 3 pins are required to interface (two I2C and one reset).

 Adafruit invests time and resources providing this open
 source code, please support Adafruit and open-source
 hardware by purchasing products from Adafruit!

 Written by Limor Fried/Ladyada for Adafruit Industries,
 with contributions from the open source community.
 BSD license, check license.txt for more information
 All text above, and the splash screen below must be
 included in any redistribution.
 **************************************************************************/

/**************************************************************************
    Modified to use the pico-ardiuino-compat C binding
**************************************************************************/

#include "pico/stdlib.h"
#include <stdio.h>
#include <stdlib.h>
//
#include "adafruit-ssd1306.h"

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library.
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...
#define OLED_RESET -1       // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

// Wire = GPIO 4 & 5
// Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define NUMFLAKES 10 // Number of snowflakes in the animation example

#define LOGO_HEIGHT 16
#define LOGO_WIDTH 16
static const unsigned char logo_bmp[] = {0b00000000, 0b11000000, 0b00000001, 0b11000000, 0b00000001, 0b11000000, 0b00000011, 0b11100000,
                                         0b11110011, 0b11100000, 0b11111110, 0b11111000, 0b01111110, 0b11111111, 0b00110011, 0b10011111,
                                         0b00011111, 0b11111100, 0b00001101, 0b01110000, 0b00011011, 0b10100000, 0b00111111, 0b11100000,
                                         0b00111111, 0b11110000, 0b01111100, 0b11110000, 0b01110000, 0b01110000, 0b00000000, 0b00110000};

#define max(a, b) ((a) > (b) ? (a) : (b))
#define F(a) (a)

long random_size(long howbig)
{
  if (howbig == 0) {
    return 0;
  }
  return random() % howbig;
  //return random() % howbig; // w/o namespace
}

long random_range(long howsmall, long howbig)
{
  if (howsmall >= howbig) {
    return howsmall;
  }
  long diff = howbig - howsmall;
  return random_size(diff) + howsmall;
}

void testdrawline(adafruit_ssd1306 *ssd1306) {
    int16_t i;

    ssd1306_clearDisplay(ssd1306); // Clear display buffer

    for (i = 0; i < gfx_width(ssd1306->gfx); i += 4) {
        gfx_drawLine(ssd1306->gfx, 0, 0, i, gfx_height(ssd1306->gfx) - 1, SSD1306_WHITE);
        ssd1306_display(ssd1306); // Update screen with each newly-drawn line
        sleep_ms(1);
    }
    for (i = 0; i < gfx_height(ssd1306->gfx); i += 4) {
        gfx_drawLine(ssd1306->gfx, 0, 0, gfx_width(ssd1306->gfx) - 1, i, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }
    sleep_ms(250);

    ssd1306_clearDisplay(ssd1306);

    for (i = 0; i < gfx_width(ssd1306->gfx); i += 4) {
        gfx_drawLine(ssd1306->gfx, 0, gfx_height(ssd1306->gfx) - 1, i, 0, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }
    for (i = gfx_height(ssd1306->gfx) - 1; i >= 0; i -= 4) {
        gfx_drawLine(ssd1306->gfx, 0, gfx_height(ssd1306->gfx) - 1, gfx_width(ssd1306->gfx) - 1, i, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }
    sleep_ms(250);

    ssd1306_clearDisplay(ssd1306);

    for (i = gfx_width(ssd1306->gfx) - 1; i >= 0; i -= 4) {
        gfx_drawLine(ssd1306->gfx, gfx_width(ssd1306->gfx) - 1, gfx_height(ssd1306->gfx) - 1, i, 0, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }
    for (i = gfx_height(ssd1306->gfx) - 1; i >= 0; i -= 4) {
        gfx_drawLine(ssd1306->gfx, gfx_width(ssd1306->gfx) - 1, gfx_height(ssd1306->gfx) - 1, 0, i, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }
    sleep_ms(250);

    ssd1306_clearDisplay(ssd1306);

    for (i = 0; i < gfx_height(ssd1306->gfx); i += 4) {
        gfx_drawLine(ssd1306->gfx, gfx_width(ssd1306->gfx) - 1, 0, 0, i, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }
    for (i = 0; i < gfx_width(ssd1306->gfx); i += 4) {
        gfx_drawLine(ssd1306->gfx, gfx_width(ssd1306->gfx) - 1, 0, i, gfx_height(ssd1306->gfx) - 1, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }

    sleep_ms(2000); // Pause for 2 seconds
}

void testdrawrect(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = 0; i < gfx_height(ssd1306->gfx) / 2; i += 2) {
        gfx_drawRect(ssd1306->gfx, i, i, gfx_width(ssd1306->gfx) - 2 * i, gfx_height(ssd1306->gfx) - 2 * i, SSD1306_WHITE);
        ssd1306_display(ssd1306); // Update screen with each newly-drawn rectangle
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testfillrect(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = 0; i < gfx_height(ssd1306->gfx) / 2; i += 3) {
        // The INVERSE color is used so rectangles alternate white/black
        gfx_fillRect(ssd1306->gfx, i, i, gfx_width(ssd1306->gfx) - i * 2, gfx_height(ssd1306->gfx) - i * 2, SSD1306_INVERSE);
        ssd1306_display(ssd1306); // Update screen with each newly-drawn rectangle
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testdrawcircle(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = 0; i < max(gfx_width(ssd1306->gfx), gfx_height(ssd1306->gfx)) / 2; i += 2) {
        gfx_drawCircle(ssd1306->gfx, gfx_width(ssd1306->gfx) / 2, gfx_height(ssd1306->gfx) / 2, i, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testfillcircle(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = max(gfx_width(ssd1306->gfx), gfx_height(ssd1306->gfx)) / 2; i > 0; i -= 3) {
        // The INVERSE color is used so circles alternate white/black
        gfx_fillCircle(ssd1306->gfx, gfx_width(ssd1306->gfx) / 2, gfx_height(ssd1306->gfx) / 2, i, SSD1306_INVERSE);
        ssd1306_display(ssd1306); // Update screen with each newly-drawn circle
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testdrawroundrect(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = 0; i < gfx_height(ssd1306->gfx) / 2 - 2; i += 2) {
        gfx_drawRoundRect(ssd1306->gfx, i, i, gfx_width(ssd1306->gfx) - 2 * i, gfx_height(ssd1306->gfx) - 2 * i, gfx_height(ssd1306->gfx) / 4, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testfillroundrect(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = 0; i < gfx_height(ssd1306->gfx) / 2 - 2; i += 2) {
        // The INVERSE color is used so round-rects alternate white/black
        gfx_fillRoundRect(ssd1306->gfx, i, i, gfx_width(ssd1306->gfx) - 2 * i, gfx_height(ssd1306->gfx) - 2 * i, gfx_height(ssd1306->gfx) / 4, SSD1306_INVERSE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testdrawtriangle(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = 0; i < max(gfx_width(ssd1306->gfx), gfx_height(ssd1306->gfx)) / 2; i += 5) {
        gfx_drawTriangle(ssd1306->gfx, gfx_width(ssd1306->gfx) / 2, gfx_height(ssd1306->gfx) / 2 - i, gfx_width(ssd1306->gfx) / 2 - i,
                         gfx_height(ssd1306->gfx) / 2 + i, gfx_width(ssd1306->gfx) / 2 + i, gfx_height(ssd1306->gfx) / 2 + i, SSD1306_WHITE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testfilltriangle(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    for (int16_t i = max(gfx_width(ssd1306->gfx), gfx_height(ssd1306->gfx)) / 2; i > 0; i -= 5) {
        // The INVERSE color is used so triangles alternate white/black
        gfx_fillTriangle(ssd1306->gfx, gfx_width(ssd1306->gfx) / 2, gfx_height(ssd1306->gfx) / 2 - i, gfx_width(ssd1306->gfx) / 2 - i,
                         gfx_height(ssd1306->gfx) / 2 + i, gfx_width(ssd1306->gfx) / 2 + i, gfx_height(ssd1306->gfx) / 2 + i, SSD1306_INVERSE);
        ssd1306_display(ssd1306);
        sleep_ms(1);
    }

    sleep_ms(2000);
}

void testdrawchar(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    gfx_setTextSize(ssd1306->gfx, 1);              // Normal 1:1 pixel scale
    gfx_setTextColor(ssd1306->gfx, SSD1306_WHITE); // Draw white text
    gfx_setCursor(ssd1306->gfx, 0, 0);             // Start at top-left corner
    gfx_cp437(ssd1306->gfx, true);                 // Use full 256 char 'Code Page 437' font

    // Not all the characters will fit on the display. This is normal.
    // Library will draw what it can and the rest will be clipped.
    for (int16_t i = 0; i < 256; i++) {
        if (i == '\n')
            gfx_write(ssd1306->gfx, ' ');
        else
            gfx_write(ssd1306->gfx, i);
    }

    ssd1306_display(ssd1306);
    sleep_ms(2000);
}

void testdrawstyles(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    gfx_setTextSize(ssd1306->gfx, 1);              // Normal 1:1 pixel scale
    gfx_setTextColor(ssd1306->gfx, SSD1306_WHITE); // Draw white text
    gfx_setCursor(ssd1306->gfx, 0, 0);             // Start at top-left corner
    gfx_println(ssd1306->gfx, F("Hello, world!"));

    gfx_setTextAndBackgroundColor(ssd1306->gfx, SSD1306_BLACK, SSD1306_WHITE); // Draw 'inverse' text
    gfx_println_d(ssd1306->gfx, 3.141592);

    gfx_setTextSize(ssd1306->gfx, 2); // Draw 2X-scale text
    gfx_setTextColor(ssd1306->gfx, SSD1306_WHITE);
    gfx_print(ssd1306->gfx, F("0x"));
    gfx_println_ul_base(ssd1306->gfx, 0xDEADBEEF, 16);

    ssd1306_display(ssd1306);
    sleep_ms(2000);
}

void testscrolltext(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    gfx_setTextSize(ssd1306->gfx, 2); // Draw 2X-scale text
    gfx_setTextColor(ssd1306->gfx, SSD1306_WHITE);
    gfx_setCursor(ssd1306->gfx, 10, 0);
    gfx_println(ssd1306->gfx, F("scroll"));
    ssd1306_display(ssd1306); // Show initial text
    sleep_ms(100);

    // Scroll in various directions, pausing in-between:
    ssd1306_startscrollright(ssd1306, 0x00, 0x0F);
    sleep_ms(2000);
    ssd1306_stopscroll(ssd1306);
    sleep_ms(1000);
    ssd1306_startscrollleft(ssd1306, 0x00, 0x0F);
    sleep_ms(2000);
    ssd1306_stopscroll(ssd1306);
    sleep_ms(1000);
    ssd1306_startscrolldiagright(ssd1306, 0x00, 0x07);
    sleep_ms(2000);
    ssd1306_startscrolldiagleft(ssd1306, 0x00, 0x07);
    sleep_ms(2000);
    ssd1306_stopscroll(ssd1306);
    sleep_ms(1000);
}

void testdrawbitmap(adafruit_ssd1306 *ssd1306) {
    ssd1306_clearDisplay(ssd1306);

    gfx_drawBitmap1(ssd1306->gfx, (gfx_width(ssd1306->gfx) - LOGO_WIDTH) / 2, (gfx_height(ssd1306->gfx) - LOGO_HEIGHT) / 2, logo_bmp, LOGO_WIDTH, LOGO_HEIGHT,
                   1);
    ssd1306_display(ssd1306);
    sleep_ms(1000);
}

#define XPOS 0 // Indexes into the 'icons' array in function below
#define YPOS 1
#define DELTAY 2

void testanimate(adafruit_ssd1306 *ssd1306, const uint8_t *bitmap, uint8_t w, uint8_t h) {
    int8_t f, icons[NUMFLAKES][3];

    // Initialize 'snowflake' positions
    for (f = 0; f < NUMFLAKES; f++) {
        icons[f][XPOS] = random_range(1 - LOGO_WIDTH, gfx_width(ssd1306->gfx));
        icons[f][YPOS] = -LOGO_HEIGHT;
        icons[f][DELTAY] = random_range(1, 6);
        /*
        Serial.print(F("x: "));
        Serial.print(icons[f][XPOS], DEC);
        Serial.print(F(" y: "));
        Serial.print(icons[f][YPOS], DEC);
        Serial.print(F(" dy: "));
        Serial.println(icons[f][DELTAY], DEC);
        */
    }

    for (;;) {                         // Loop forever...
        ssd1306_clearDisplay(ssd1306); // Clear the display buffer

        // Draw each snowflake:
        for (f = 0; f < NUMFLAKES; f++) {
            gfx_drawBitmap1(ssd1306->gfx, icons[f][XPOS], icons[f][YPOS], bitmap, w, h, SSD1306_WHITE);
        }

        ssd1306_display(ssd1306); // Show the display buffer on the screen
        sleep_ms(200);            // Pause for 1/10 second

        // Then update coordinates of each flake...
        for (f = 0; f < NUMFLAKES; f++) {
            icons[f][YPOS] += icons[f][DELTAY];
            // If snowflake is off the bottom of the screen...
            if (icons[f][YPOS] >= gfx_height(ssd1306->gfx)) {
                // Reinitialize to a random position, just off the top
                icons[f][XPOS] = random_range(1 - LOGO_WIDTH, gfx_width(ssd1306->gfx));
                icons[f][YPOS] = -LOGO_HEIGHT;
                icons[f][DELTAY] = random_range(1, 6);
            }
        }
    }
}

void setup() {
    stdio_init_all();
    printf("adafruit-ssd1306 - ssd1306_128x32_i2c.c\n");

    // i2c0 is GPIO 4 & 5
    adafruit_ssd1306 *ssd1306 = adafruit_ssd1306_create_i2c(SCREEN_WIDTH, SCREEN_HEIGHT, i2c0);

    // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
    if (!ssd1306_begin_ex(ssd1306, SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS, true, true)) {
        printf("SSD1306 allocation failed");
        for (;;)
            ; // Don't proceed, loop forever
    }

    // Show initial display buffer contents on the screen --
    // the library initializes this with an Adafruit splash screen.
    ssd1306_display(ssd1306);
    sleep_ms(2000); // Pause for 2 seconds

    // Clear the buffer
    ssd1306_clearDisplay(ssd1306);

    // Draw a single pixel in white
    // display.drawPixel(10, 10, SSD1306_WHITE);

    // Show the display buffer on the screen. You MUST call display() after
    // drawing commands to make them visible on screen!
    ssd1306_display(ssd1306);
    sleep_ms(2000);
    // ssd1306_display(ssd1306) is NOT necessary after every single drawing command,
    // unless that's what you want...rather, you can batch up a bunch of
    // drawing operations and then update the screen all at once by calling
    // ssd1306_display(ssd1306). These examples demonstrate both approaches...

    testdrawline(ssd1306); // Draw many lines

    testdrawrect(ssd1306); // Draw rectangles (outlines)

    testfillrect(ssd1306); // Draw rectangles (filled)

    testdrawcircle(ssd1306); // Draw circles (outlines)

    testfillcircle(ssd1306); // Draw circles (filled)

    testdrawroundrect(ssd1306); // Draw rounded rectangles (outlines)

    testfillroundrect(ssd1306); // Draw rounded rectangles (filled)

    testdrawtriangle(ssd1306); // Draw triangles (outlines)

    testfilltriangle(ssd1306); // Draw triangles (filled)

    testdrawchar(ssd1306); // Draw characters of the default font

    testdrawstyles(ssd1306); // Draw 'stylized' characters

    testscrolltext(ssd1306); // Draw scrolling text

    testdrawbitmap(ssd1306); // Draw a small bitmap image

    // Invert and restore display, pausing in-between
    ssd1306_invertDisplay(ssd1306, true);
    sleep_ms(1000);
    ssd1306_invertDisplay(ssd1306, false);
    sleep_ms(1000);

    testanimate(ssd1306, logo_bmp, LOGO_WIDTH, LOGO_HEIGHT); // Animate bitmaps
}

void loop() {
    tight_loop_contents();
}

int main() {
    setup();

    while (1) {
        loop();
    }

    return 0;
}
