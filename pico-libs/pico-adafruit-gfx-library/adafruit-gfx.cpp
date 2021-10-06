/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/

#include "adafruit-gfx.h"
#include "Adafruit_GFX.h"

/*
    void (*set_text_size)(uint8_t s);
    void (*set_cursor)(int16_t x, int16_t y);
    void (*set_text_color)(uint16_t c)
    void (*println_str)(const char *s);
*/

struct adafruit_gfx {
    // void *obj;
    Adafruit_GFX *obj;
};

static inline Adafruit_GFX *get_obj(adafruit_gfx *gfx) {
    // return (static_cast<Adafruit_GFX *>(gfx->obj));
    return gfx->obj;
}

adafruit_gfx *adafruit_gfx_create(void *obj) {
    adafruit_gfx *gfx = (adafruit_gfx *)malloc(sizeof(adafruit_gfx));
    gfx->obj = static_cast<Adafruit_GFX *>(obj);
    return gfx;
}

////////////////////////
//
// Adafruit_GFX
//

// TRANSACTION API / CORE DRAW API
// These MAY be overridden by the subclass to provide device-specific
// optimized code.  Otherwise 'generic' versions are used.
void gfx_startWrite(adafruit_gfx *gfx) { get_obj(gfx)->startWrite(); };
void gfx_writePixel(adafruit_gfx *gfx, int16_t x, int16_t y, uint16_t color) { get_obj(gfx)->writePixel(x, y, color); };
void gfx_writeFillRect(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) { get_obj(gfx)->writeFillRect(x, y, w, h, color); };
void gfx_writeFastVLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t h, uint16_t color) { get_obj(gfx)->writeFastVLine(x, y, h, color); };
void gfx_writeFastHLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, uint16_t color) { get_obj(gfx)->writeFastHLine(x, y, w, color); };
void gfx_writeLine(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) { get_obj(gfx)->writeLine(x0, y0, x1, y1, color); };
void gfx_endWrite(adafruit_gfx *gfx) { get_obj(gfx)->endWrite(); };

// CONTROL API
// These MAY be overridden by the subclass to provide device-specific
// optimized code.  Otherwise 'generic' versions are used.
void gfx_setRotation(adafruit_gfx *gfx, uint8_t r) { get_obj(gfx)->setRotation(r); };
void gfx_invertDisplay(adafruit_gfx *gfx, bool i) { get_obj(gfx)->invertDisplay(i); };

// BASIC DRAW API
// These MAY be overridden by the subclass to provide device-specific
// optimized code.  Otherwise 'generic' versions are used.

// It's good to implement those, even if using transaction API
void gfx_drawFastVLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t h, uint16_t color) { get_obj(gfx)->drawFastVLine(x, y, h, color); };
void gfx_drawFastHLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, uint16_t color) { get_obj(gfx)->drawFastHLine(x, y, w, color); };
void gfx_fillRect(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) { get_obj(gfx)->fillRect(x, y, w, h, color); };
void gfx_fillScreen(adafruit_gfx *gfx, uint16_t color) { get_obj(gfx)->fillScreen(color); };
// Optional and probably not necessary to change
void gfx_drawLine(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) { get_obj(gfx)->drawLine(x0, y0, x1, y1, color); };
void gfx_drawRect(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) { get_obj(gfx)->drawRect(x, y, w, h, color); };

// These exist only with Adafruit_GFX (no subclass overrides)
void gfx_drawCircle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint16_t color) { get_obj(gfx)->drawCircle(x0, y0, r, color); };
void gfx_drawCircleHelper(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint8_t cornername, uint16_t color) {
    get_obj(gfx)->drawCircleHelper(x0, y0, r, cornername, color);
};
void gfx_fillCircle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint16_t color) { get_obj(gfx)->fillCircle(x0, y0, r, color); };
void gfx_fillCircleHelper(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint8_t cornername, int16_t delta, uint16_t color) {
    get_obj(gfx)->fillCircleHelper(x0, y0, r, cornername, delta, color);
};
void gfx_drawTriangle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color) {
    get_obj(gfx)->drawTriangle(x0, y0, x1, y1, x2, y2, color);
};
void gfx_fillTriangle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color) {
    get_obj(gfx)->fillTriangle(x0, y0, x1, y1, x2, y2, color);
};
void gfx_drawRoundRect(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color) {
    get_obj(gfx)->drawRoundRect(x0, y0, w, h, radius, color);
};
void gfx_fillRoundRect(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color) {
    get_obj(gfx)->fillRoundRect(x0, y0, w, h, radius, color);
};

void gfx_drawBitmap1(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color) {
    get_obj(gfx)->drawBitmap(x, y, bitmap, w, h, color);
};
void gfx_drawBitmap2(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color, uint16_t bg) {
    get_obj(gfx)->drawBitmap(x, y, bitmap, w, h, color, bg);
};
void gfx_drawBitmap3(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t color) {
    get_obj(gfx)->drawBitmap(x, y, bitmap, w, h, color);
};
void gfx_drawBitmap4(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t color, uint16_t bg) {
    get_obj(gfx)->drawBitmap(x, y, bitmap, w, h, color, bg);
};

void gfx_drawXBitmap(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color) {
    get_obj(gfx)->drawXBitmap(x, y, bitmap, w, h, color);
};

void gfx_drawGrayscaleBitmap1(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h) {
    get_obj(gfx)->drawGrayscaleBitmap(x, y, bitmap, w, h);
};
void gfx_drawGrayscaleBitmap2(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h) {
    get_obj(gfx)->drawGrayscaleBitmap(x, y, bitmap, w, h);
};
void gfx_drawGrayscaleBitmap3(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], const uint8_t mask[], int16_t w, int16_t h) {
    get_obj(gfx)->drawGrayscaleBitmap(x, y, bitmap, mask, w, h);
};
void gfx_drawGrayscaleBitmap4(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, uint8_t *mask, int16_t w, int16_t h) {
    get_obj(gfx)->drawGrayscaleBitmap(x, y, bitmap, mask, w, h);
};

void gfx_drawRGBBitmap1(adafruit_gfx *gfx, int16_t x, int16_t y, const uint16_t bitmap[], int16_t w, int16_t h) {
    get_obj(gfx)->drawRGBBitmap(x, y, bitmap, w, h);
};
void gfx_drawRGBBitmap2(adafruit_gfx *gfx, int16_t x, int16_t y, uint16_t *bitmap, int16_t w, int16_t h) { get_obj(gfx)->drawRGBBitmap(x, y, bitmap, w, h); };
void gfx_drawRGBBitmap3(adafruit_gfx *gfx, int16_t x, int16_t y, const uint16_t bitmap[], const uint8_t mask[], int16_t w, int16_t h) {
    get_obj(gfx)->drawRGBBitmap(x, y, bitmap, mask, w, h);
};
void gfx_drawRGBBitmap4(adafruit_gfx *gfx, int16_t x, int16_t y, uint16_t *bitmap, uint8_t *mask, int16_t w, int16_t h) {
    get_obj(gfx)->drawRGBBitmap(x, y, bitmap, mask, w, h);
};

void gfx_drawChar1(adafruit_gfx *gfx, int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size) {
    get_obj(gfx)->drawChar(x, y, c, color, bg, size);
};
void gfx_drawChar2(adafruit_gfx *gfx, int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size_x, uint8_t size_y) {
    get_obj(gfx)->drawChar(x, y, c, color, bg, size_x, size_y);
};

void gfx_getTextBounds(adafruit_gfx *gfx, const char *string, int16_t x, int16_t y, int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h) {
    get_obj(gfx)->getTextBounds(string, x, y, x1, y1, w, h);
};

void gfx_setTextSize(adafruit_gfx *gfx, uint8_t s) { get_obj(gfx)->setTextSize(s); };
void gfx_setTextSize_xy(adafruit_gfx *gfx, uint8_t sx, uint8_t sy) { get_obj(gfx)->setTextSize(sx, sy); };

void gfx_setFont1(adafruit_gfx *gfx) { get_obj(gfx)->setFont(NULL); };
void gfx_setFont2(adafruit_gfx *gfx, const void *f) { get_obj(gfx)->setFont(static_cast<const GFXfont *>(f)); };

/**********************************************************************/
/*!
  @brief  Set text cursor location
  @param  x    X coordinate in pixels
  @param  y    Y coordinate in pixels
*/
/**********************************************************************/
void gfx_setCursor(adafruit_gfx *gfx, int16_t x, int16_t y) { get_obj(gfx)->setCursor(x, y); };

/**********************************************************************/
/*!
  @brief   Set text font color with transparant background
  @param   c   16-bit 5-6-5 Color to draw text with
  @note    For 'transparent' background, background and foreground
           are set to same color rather than using a separate flag.
*/
/**********************************************************************/
void gfx_setTextColor(adafruit_gfx *gfx, uint16_t c) { get_obj(gfx)->setTextColor(c); };

/**********************************************************************/
/*!
  @brief   Set text font color with custom background color
  @param   c   16-bit 5-6-5 Color to draw text with
  @param   bg  16-bit 5-6-5 Color to draw background/fill with
*/
/**********************************************************************/
void gfx_setTextAndBackgroundColor(adafruit_gfx *gfx, uint16_t c, uint16_t bg) { get_obj(gfx)->setTextColor(c, bg); };

/**********************************************************************/
/*!
@brief  Set whether text that is too long for the screen width should
        automatically wrap around to the next line (else clip right).
@param  w  true for wrapping, false for clipping
*/
/**********************************************************************/
void gfx_setTextWrap(adafruit_gfx *gfx, bool w) { get_obj(gfx)->setTextWrap(w); };

/**********************************************************************/
/*!
  @brief  Enable (or disable) Code Page 437-compatible charset.
          There was an error in glcdfont.c for the longest time -- one
          character (#176, the 'light shade' block) was missing -- this
          threw off the index of every character that followed it.
          But a TON of code has been written with the erroneous
          character indices. By default, the library uses the original
          'wrong' behavior and old sketches will still work. Pass
          'true' to this function to use correct CP437 character values
          in your code.
  @param  x  true = enable (new behavior), false = disable (old behavior)
*/
/**********************************************************************/
void gfx_cp437(adafruit_gfx *gfx, bool x) { get_obj(gfx)->cp437(x); };

void gfx_write(adafruit_gfx *gfx, uint8_t x) { get_obj(gfx)->write(x); };

/************************************************************************/
/*!
  @brief      Get width of the display, accounting for current rotation
  @returns    Width in pixels
*/
/************************************************************************/
int16_t gfx_width(adafruit_gfx *gfx) { return get_obj(gfx)->width(); };

/************************************************************************/
/*!
  @brief      Get height of the display, accounting for current rotation
  @returns    Height in pixels
*/
/************************************************************************/
int16_t gfx_height(adafruit_gfx *gfx) { return get_obj(gfx)->height(); };

/************************************************************************/
/*!
  @brief      Get rotation setting for display
  @returns    0 thru 3 corresponding to 4 cardinal rotations
*/
/************************************************************************/
uint8_t gfx_getRotation(adafruit_gfx *gfx) { return get_obj(gfx)->getRotation(); };

// get current cursor position (get rotation safe maximum values,
// using: width() for x, height() for y)
/************************************************************************/
/*!
  @brief  Get text cursor X location
  @returns    X coordinate in pixels
*/
/************************************************************************/
int16_t gfx_getCursorX(adafruit_gfx *gfx) { return get_obj(gfx)->getCursorX(); };

/************************************************************************/
/*!
  @brief      Get text cursor Y location
  @returns    Y coordinate in pixels
*/
/************************************************************************/
int16_t gfx_getCursorY(adafruit_gfx *gfx) { return get_obj(gfx)->getCursorY(); };

/////////////////////////
//
// Print
//

int gfx_getWriteError(adafruit_gfx *gfx) { return get_obj(gfx)->getWriteError(); }
void gfx_clearWriteError(adafruit_gfx *gfx) { return get_obj(gfx)->clearWriteError(); }
size_t gfx_write_str(adafruit_gfx *gfx, const char *str) { return get_obj(gfx)->write(str); }
size_t gfx_writen_u8(adafruit_gfx *gfx, const uint8_t *buffer, size_t size) { return get_obj(gfx)->write(buffer, size); }
size_t gfx_writen_str(adafruit_gfx *gfx, const char *buffer, size_t size) { return get_obj(gfx)->write(buffer, size); }
int gfx_availableForWrite(adafruit_gfx *gfx) { return get_obj(gfx)->availableForWrite(); }
size_t gfx_print(adafruit_gfx *gfx, const char *s) { return get_obj(gfx)->print(s); }
size_t gfx_print2(adafruit_gfx *gfx, const char s[]) { return get_obj(gfx)->print(s); }
size_t gfx_print_c(adafruit_gfx *gfx, char c) { return get_obj(gfx)->print(c); }
size_t gfx_print_uc_base(adafruit_gfx *gfx, unsigned char c, int base) { return get_obj(gfx)->print(c, base); }
size_t gfx_print_i_base(adafruit_gfx *gfx, int i, int base) { return get_obj(gfx)->print(i, base); }
size_t gfx_print_ui_base(adafruit_gfx *gfx, unsigned int ui, int base) { return get_obj(gfx)->print(ui, base); }
size_t gfx_print_l_base(adafruit_gfx *gfx, long l, int base) { return get_obj(gfx)->print(l, base); }
size_t gfx_print_ul_base(adafruit_gfx *gfx, unsigned long ul, int base) { return get_obj(gfx)->print(ul, base); }
size_t gfx_print_d_digits(adafruit_gfx *gfx, double, int digits) { return get_obj(gfx)->print(digits); }

size_t gfx_println(adafruit_gfx *gfx, const char *s) { return get_obj(gfx)->println(s); }
size_t gfx_println2(adafruit_gfx *gfx, const char s[]) { return get_obj(gfx)->println(s); }
size_t gfx_println_c(adafruit_gfx *gfx, char c) { return get_obj(gfx)->println(c); }

size_t gfx_println_uc_base(adafruit_gfx *gfx, unsigned char uc, int base) { return get_obj(gfx)->println(uc, base); }
size_t gfx_println_i_base(adafruit_gfx *gfx, int i, int base) { return get_obj(gfx)->println(i, base); }
size_t gfx_println_ui_base(adafruit_gfx *gfx, unsigned int ui, int base) { return get_obj(gfx)->println(ui, base); }
size_t gfx_println_l_base(adafruit_gfx *gfx, long l, int base) { return get_obj(gfx)->println(l, base); }
size_t gfx_println_ul_base(adafruit_gfx *gfx, unsigned long ul, int base) { return get_obj(gfx)->println(ul, base); }
size_t gfx_println_d_digits(adafruit_gfx *gfx, double d, int digits) { return get_obj(gfx)->println(d, digits); }

void gfx_flush(adafruit_gfx *gfx) { get_obj(gfx)->flush(); }
