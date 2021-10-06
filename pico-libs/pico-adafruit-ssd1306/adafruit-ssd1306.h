/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/

#pragma once

#include <stddef.h>
#include <stdint.h>
//
#include "hardware/i2c.h"
#include "hardware/spi.h"
//
#include "adafruit-gfx.h"

/// The following "raw" color names are kept for backwards client compatability
/// They can be disabled by predefining this macro before including the Adafruit
/// header client code will then need to be modified to use the scoped enum
/// values directly
#ifndef NO_ADAFRUIT_SSD1306_COLOR_COMPATIBILITY
#define BLACK SSD1306_BLACK     ///< Draw 'off' pixels
#define WHITE SSD1306_WHITE     ///< Draw 'on' pixels
#define INVERSE SSD1306_INVERSE ///< Invert pixels
#endif
/// fit into the SSD1306_ naming scheme
#define SSD1306_BLACK 0   ///< Draw 'off' pixels
#define SSD1306_WHITE 1   ///< Draw 'on' pixels
#define SSD1306_INVERSE 2 ///< Invert pixels

#define SSD1306_MEMORYMODE 0x20          ///< See datasheet
#define SSD1306_COLUMNADDR 0x21          ///< See datasheet
#define SSD1306_PAGEADDR 0x22            ///< See datasheet
#define SSD1306_SETCONTRAST 0x81         ///< See datasheet
#define SSD1306_CHARGEPUMP 0x8D          ///< See datasheet
#define SSD1306_SEGREMAP 0xA0            ///< See datasheet
#define SSD1306_DISPLAYALLON_RESUME 0xA4 ///< See datasheet
#define SSD1306_DISPLAYALLON 0xA5        ///< Not currently used
#define SSD1306_NORMALDISPLAY 0xA6       ///< See datasheet
#define SSD1306_INVERTDISPLAY 0xA7       ///< See datasheet
#define SSD1306_SETMULTIPLEX 0xA8        ///< See datasheet
#define SSD1306_DISPLAYOFF 0xAE          ///< See datasheet
#define SSD1306_DISPLAYON 0xAF           ///< See datasheet
#define SSD1306_COMSCANINC 0xC0          ///< Not currently used
#define SSD1306_COMSCANDEC 0xC8          ///< See datasheet
#define SSD1306_SETDISPLAYOFFSET 0xD3    ///< See datasheet
#define SSD1306_SETDISPLAYCLOCKDIV 0xD5  ///< See datasheet
#define SSD1306_SETPRECHARGE 0xD9        ///< See datasheet
#define SSD1306_SETCOMPINS 0xDA          ///< See datasheet
#define SSD1306_SETVCOMDETECT 0xDB       ///< See datasheet

#define SSD1306_SETLOWCOLUMN 0x00  ///< Not currently used
#define SSD1306_SETHIGHCOLUMN 0x10 ///< Not currently used
#define SSD1306_SETSTARTLINE 0x40  ///< See datasheet

#define SSD1306_EXTERNALVCC 0x01  ///< External display voltage source
#define SSD1306_SWITCHCAPVCC 0x02 ///< Gen. display voltage from 3.3V

#define SSD1306_RIGHT_HORIZONTAL_SCROLL 0x26              ///< Init rt scroll
#define SSD1306_LEFT_HORIZONTAL_SCROLL 0x27               ///< Init left scroll
#define SSD1306_VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL 0x29 ///< Init diag scroll
#define SSD1306_VERTICAL_AND_LEFT_HORIZONTAL_SCROLL 0x2A  ///< Init diag scroll
#define SSD1306_DEACTIVATE_SCROLL 0x2E                    ///< Stop scroll
#define SSD1306_ACTIVATE_SCROLL 0x2F                      ///< Start scroll
#define SSD1306_SET_VERTICAL_SCROLL_AREA 0xA3             ///< Set scroll range

// Deprecated size stuff for backwards compatibility with old sketches
#if defined SSD1306_128_64
#define SSD1306_LCDWIDTH 128 ///< DEPRECATED: width w/SSD1306_128_64 defined
#define SSD1306_LCDHEIGHT 64 ///< DEPRECATED: height w/SSD1306_128_64 defined
#endif
#if defined SSD1306_128_32
#define SSD1306_LCDWIDTH 128 ///< DEPRECATED: width w/SSD1306_128_32 defined
#define SSD1306_LCDHEIGHT 32 ///< DEPRECATED: height w/SSD1306_128_32 defined
#endif
#if defined SSD1306_96_16
#define SSD1306_LCDWIDTH 96  ///< DEPRECATED: width w/SSD1306_96_16 defined
#define SSD1306_LCDHEIGHT 16 ///< DEPRECATED: height w/SSD1306_96_16 defined
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    adafruit_gfx *gfx;
    void *obj;
} adafruit_ssd1306;

// I2C using default pins
// see arduino-compat/pico/variants/*/arduino_pins.h
adafruit_ssd1306 *adafruit_ssd1306_create_i2c_ex(uint8_t w, uint8_t h, i2c_inst_t *i2c, int8_t rst_pin, uint32_t clkDuring, uint32_t clkAfter);
inline adafruit_ssd1306 *adafruit_ssd1306_create_i2c(uint8_t w, uint8_t h, i2c_inst_t *i2c) {
    return adafruit_ssd1306_create_i2c_ex(w, h, i2c, -1, 400000UL, 100000UL);
}

// TODO: I2C with pin selection
// adafruit_ssd1306 *adafruit_ssd1306_create_i2c_pins_ex(uint8_t w, uint8_t h, i2c_inst_t *i2c, int8_t sda_pin, int8_t scl_pin, int8_t rst_pin = -1,
//                                                 uint32_t clkDuring = 400000UL, uint32_t clkAfter = 100000UL);
// adafruit_ssd1306 *adafruit_ssd1306_create_i2c_pins(uint8_t w, uint8_t h, i2c_inst_t *i2c, int8_t sda_pin, int8_t scl_pin);


// Hardware SPI
adafruit_ssd1306 *adafruit_ssd1306_create_spi_ex(uint8_t w, uint8_t h, spi_inst_t *spi, int8_t dc_pin, int8_t rst_pin, int8_t cs_pin, uint32_t bitrate);
inline adafruit_ssd1306 *adafruit_ssd1306_create_spi(uint8_t w, uint8_t h, spi_inst_t *spi, int8_t dc_pin, int8_t rst_pin, int8_t cs_pin) {
    return adafruit_ssd1306_create_spi_ex(w, h, spi, dc_pin, rst_pin, cs_pin, 8000000UL);
}

// Software (bitbang) SPI
adafruit_ssd1306 *adafruit_ssd1306_create_bbspi(uint8_t w, uint8_t h, int8_t mosi_pin, int8_t sclk_pin, int8_t dc_pin, int8_t rst_pin, int8_t cs_pin);


//////

bool ssd1306_begin_ex(adafruit_ssd1306 *ssd1306, uint8_t switchvcc, uint8_t i2caddr, bool reset, bool periphBegin);
inline bool ssd1306_begin(adafruit_ssd1306 *ssd1306, uint8_t switchvcc, uint8_t i2caddr) { return ssd1306_begin_ex(ssd1306, switchvcc, i2caddr, true, true); }

void ssd1306_display(adafruit_ssd1306 *ssd1306);
void ssd1306_clearDisplay(adafruit_ssd1306 *ssd1306);
void ssd1306_invertDisplay(adafruit_ssd1306 *ssd1306, bool i);
void ssd1306_dim(adafruit_ssd1306 *ssd1306, bool dim);
void ssd1306_drawPixel(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y, uint16_t color);
void ssd1306_drawFastHLine(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y, int16_t w, uint16_t color);
void ssd1306_drawFastVLine(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y, int16_t h, uint16_t color);
void ssd1306_startscrollright(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop);
void ssd1306_startscrollleft(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop);
void ssd1306_startscrolldiagright(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop);
void ssd1306_startscrolldiagleft(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop);
void ssd1306_stopscroll(adafruit_ssd1306 *ssd1306);
void ssd1306_ssd1306_command(adafruit_ssd1306 *ssd1306, uint8_t c);
bool ssd1306_getPixel(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y);
uint8_t *ssd1306_getBuffer(adafruit_ssd1306 *ssd1306);

#ifdef __cplusplus
}
#endif
