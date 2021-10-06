/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"
//
#include "adafruit-ssd1306.h"

const int screen_width = 128;
const int screen_height = 32;

int main() {
    stdio_init_all();
    printf("adafruit-ssd1306 - I2C - text-i2c.cpp\n");

    // I2C
    // i2c0 is GPIO 4 & 5
    adafruit_ssd1306 *ssd1306 = adafruit_ssd1306_create_i2c(screen_width, screen_height, i2c0);

    // Hardware SPI
    // spi0 is GPIO 16,17,18,19
    //const int8_t dc_pin = 20;
    //const int8_t rst_pin = 21;
    //const int8_t cs_pin = 22;
    //adafruit_ssd1306 *ssd1306 = adafruit_ssd1306_create_spi(screen_width, screen_height, spi0, dc_pin, rst_pin, cs_pin);

    // Software SPI
    //const int8_t mosi_pin = 10;
    //const int8_t sclk_pin = 11;
    //adafruit_ssd1306 *ssd1306 = adafruit_ssd1306_create_bbspi(screen_width, screen_height, mosi_pin, sclk_pin, dc_pin, rst_pin, cs_pin);

    // initialize with the I2C addr 0x3C
	ssd1306_begin(ssd1306, SSD1306_SWITCHCAPVCC, 0x3C);  

	// Clear the buffer.
	ssd1306_clearDisplay(ssd1306);

	// Display Text
	gfx_setTextSize(ssd1306->gfx, 1);
	gfx_setTextColor(ssd1306->gfx, WHITE);
	gfx_setCursor(ssd1306->gfx, 0,screen_height/3);
	gfx_println(ssd1306->gfx, "Hello world!!");
	ssd1306_display(ssd1306);
	sleep_ms(2000);
	ssd1306_clearDisplay(ssd1306);

	// Display Inverted Text
	gfx_setTextAndBackgroundColor(ssd1306->gfx,BLACK, WHITE); // 'inverted' text
	gfx_setCursor(ssd1306->gfx,0,screen_height/3);
	gfx_println(ssd1306->gfx,"Hello world!");
	ssd1306_display(ssd1306);
	sleep_ms(2000);
	ssd1306_clearDisplay(ssd1306);

	// Changing Font Size
	gfx_setTextColor(ssd1306->gfx,WHITE);
	gfx_setCursor(ssd1306->gfx,0,screen_height/3);
	gfx_setTextSize(ssd1306->gfx,2);
	gfx_println(ssd1306->gfx, "Hello!");
	ssd1306_display(ssd1306);
	sleep_ms(2000);
	ssd1306_clearDisplay(ssd1306);

	// Display Numbers
	gfx_setTextSize(ssd1306->gfx,1);
	gfx_setCursor(ssd1306->gfx,0,screen_height/3);
	gfx_println_i(ssd1306->gfx,123456789);
	ssd1306_display(ssd1306);
	sleep_ms(2000);
	ssd1306_clearDisplay(ssd1306);

	// Specifying Base For Numbers
	gfx_setCursor(ssd1306->gfx,0,screen_height/3);
	gfx_print(ssd1306->gfx,"0x"); 
	gfx_print_ui_base(ssd1306->gfx,0xFF, 16); 
	gfx_print(ssd1306->gfx,"(HEX) = ");
	gfx_print_ui_base(ssd1306->gfx,0xFF, 10);
	gfx_println(ssd1306->gfx,"(DEC)"); 
	ssd1306_display(ssd1306);
	sleep_ms(2000);
	ssd1306_clearDisplay(ssd1306);

	// Display ASCII Characters
	gfx_setCursor(ssd1306->gfx,0,screen_height/3);
	gfx_setTextSize(ssd1306->gfx,2);
	gfx_write(ssd1306->gfx,3);
	ssd1306_display(ssd1306);
	sleep_ms(2000);
	ssd1306_clearDisplay(ssd1306);

	// Scroll full screen
	gfx_setCursor(ssd1306->gfx,0,0);
	gfx_setTextSize(ssd1306->gfx,1);
	gfx_println(ssd1306->gfx,"Full");
	gfx_println(ssd1306->gfx,"screen");
	gfx_println(ssd1306->gfx,"scrolling!");
	ssd1306_display(ssd1306);
	ssd1306_startscrollright(ssd1306,0x00, 0x07);
	sleep_ms(2000);
	ssd1306_stopscroll(ssd1306);
	sleep_ms(1000);
	ssd1306_startscrollleft(ssd1306,0x00, 0x07);
	sleep_ms(2000);
	ssd1306_stopscroll(ssd1306);
	sleep_ms(1000);    
	ssd1306_startscrolldiagright(ssd1306,0x00, 0x07);
	sleep_ms(2000);
	ssd1306_startscrolldiagleft(ssd1306,0x00, 0x07);
	sleep_ms(2000);
	ssd1306_stopscroll(ssd1306);
	ssd1306_clearDisplay(ssd1306);

	// Scroll part of the screen
	gfx_setCursor(ssd1306->gfx,0,0);
	gfx_setTextSize(ssd1306->gfx,1);
	gfx_println(ssd1306->gfx,"Scroll");
	gfx_println(ssd1306->gfx,"some part");
	gfx_println(ssd1306->gfx,"of the screen.");
	ssd1306_display(ssd1306);
	ssd1306_startscrollright(ssd1306, 0x00, 0x00);

	while(1) tight_loop_contents();
    return 0;
}
