/**
 * Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
 */

#include <stdio.h>
#include "pico/stdlib.h"
//
#include "adafruit-gfx.h"
#include "Adafruit_GFX.h"

class ArduinoSSD1306Lib : public Adafruit_GFX {
public:
    ArduinoSSD1306Lib() : Adafruit_GFX(100, 100) {}
    void drawPixel(int16_t x, int16_t y, uint16_t color) {
        printf("drawPixel: %u, %u, %u\n", x, y, color);
    }
};

typedef struct {
    adafruit_gfx *gfx;
} ssd1306;

ssd1306 *ssd1306_create() {
    adafruit_gfx *gfx = adafruit_gfx_create(new ArduinoSSD1306Lib());

    ssd1306 *ssd = (ssd1306*)malloc(sizeof(ssd1306));
    ssd->gfx = gfx;
    return ssd;
}

int main() {
    sleep_ms(100);
    stdio_init_all();
    sleep_ms(100);
    printf("adafruit-gfx-test\n");

    ssd1306 *ssd = ssd1306_create();
    gfx_println(ssd->gfx, "Hello world!!"); 

    printf("end-test\n");

    while(1) {tight_loop_contents();}
    return 0;
}
