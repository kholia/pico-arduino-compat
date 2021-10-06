/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/

#include "adafruit-ssd1306.h"
#include "Adafruit_SSD1306.h"
#include "Wire.h"
#include "hardware/gpio.h"

/*
    void (*set_text_size)(uint8_t s);
    void (*set_cursor)(int16_t x, int16_t y);
    void (*set_text_color)(uint16_t c)
    void (*println_str)(const char *s);
*/

static inline Adafruit_SSD1306 *get_obj(adafruit_ssd1306 *ssd1306) { return (static_cast<Adafruit_SSD1306 *>(ssd1306->obj)); }

static adafruit_ssd1306 *create(Adafruit_SSD1306 *lib) {
    adafruit_ssd1306 *ssd1306 = (adafruit_ssd1306 *)malloc(sizeof(adafruit_ssd1306));
    ssd1306->gfx = adafruit_gfx_create(lib);
    ssd1306->obj = lib;
    return ssd1306;
}

adafruit_ssd1306 *adafruit_ssd1306_create_i2c_ex(uint8_t w, uint8_t h, i2c_inst_t *i2c, int8_t rst_pin, uint32_t clkDuring, uint32_t clkAfter) {
    TwoWire *wire = (i2c == i2c1 ? &Wire1 : &Wire);
    Adafruit_SSD1306 *lib = new Adafruit_SSD1306(w, h, wire, rst_pin, clkDuring, clkAfter);
    return create(lib);
}

adafruit_ssd1306 *adafruit_ssd1306_create_spi_ex(uint8_t w, uint8_t h, spi_inst_t *spi, int8_t dc_pin, int8_t rst_pin, int8_t cs_pin, uint32_t bitrate) {
    SPIClass *spiclass = (spi == spi1 ? &SPI1 : &SPI);
    Adafruit_SSD1306 *lib = new Adafruit_SSD1306(w, h, spiclass, dc_pin, rst_pin, cs_pin, bitrate);
    return create(lib);
}

adafruit_ssd1306 *adafruit_ssd1306_create_bbspi(uint8_t w, uint8_t h, int8_t mosi_pin, int8_t sclk_pin, int8_t dc_pin, int8_t rst_pin, int8_t cs_pin) {
    Adafruit_SSD1306 *lib = new Adafruit_SSD1306(w, h, mosi_pin, sclk_pin, dc_pin, rst_pin, cs_pin);
    return create(lib);
}

bool ssd1306_begin_ex(adafruit_ssd1306 *ssd1306, uint8_t switchvcc, uint8_t i2caddr, bool reset, bool periphBegin) {
    return get_obj(ssd1306)->begin(switchvcc, i2caddr, reset, periphBegin);
}

// void ssd1306_display(adafruit_ssd1306 *ssd1306);

void ssd1306_display(adafruit_ssd1306 *ssd1306) { get_obj(ssd1306)->display(); }
void ssd1306_clearDisplay(adafruit_ssd1306 *ssd1306) { get_obj(ssd1306)->clearDisplay(); }
void ssd1306_invertDisplay(adafruit_ssd1306 *ssd1306, bool i) { get_obj(ssd1306)->invertDisplay(i); }
void ssd1306_dim(adafruit_ssd1306 *ssd1306, bool dim) { get_obj(ssd1306)->dim(dim); }
void ssd1306_drawPixel(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y, uint16_t color) { get_obj(ssd1306)->drawPixel(x, y, color); }
void ssd1306_drawFastHLine(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y, int16_t w, uint16_t color) { get_obj(ssd1306)->drawFastHLine(x, y, w, color); }
void ssd1306_drawFastVLine(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y, int16_t h, uint16_t color) { get_obj(ssd1306)->drawFastVLine(x, y, h, color); }
void ssd1306_startscrollright(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop) { get_obj(ssd1306)->startscrollright(start, stop); }
void ssd1306_startscrollleft(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop) { get_obj(ssd1306)->startscrollleft(start, stop); }
void ssd1306_startscrolldiagright(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop) { get_obj(ssd1306)->startscrolldiagright(start, stop); }
void ssd1306_startscrolldiagleft(adafruit_ssd1306 *ssd1306, uint8_t start, uint8_t stop) { get_obj(ssd1306)->startscrolldiagleft(start, stop); }
void ssd1306_stopscroll(adafruit_ssd1306 *ssd1306) { get_obj(ssd1306)->stopscroll(); }
void ssd1306_ssd1306_command(adafruit_ssd1306 *ssd1306, uint8_t c) { get_obj(ssd1306)->ssd1306_command(c); }
bool ssd1306_getPixel(adafruit_ssd1306 *ssd1306, int16_t x, int16_t y) { return get_obj(ssd1306)->getPixel(x, y); }
uint8_t *ssd1306_getBuffer(adafruit_ssd1306 *ssd1306) { return get_obj(ssd1306)->getBuffer(); }
