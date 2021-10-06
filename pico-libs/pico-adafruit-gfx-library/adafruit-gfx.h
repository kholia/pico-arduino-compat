/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/

#pragma once

#include <stddef.h>
#include <stdint.h>

// https://nachtimwald.com/2017/08/18/wrapping-c-objects-in-c/

#ifdef __cplusplus
extern "C" {
#endif

// Struct to hold reference to Adafruit_GFX object
struct adafruit_gfx;
typedef struct adafruit_gfx adafruit_gfx;

// obj is of type Adafruit_GFX
adafruit_gfx *adafruit_gfx_create(void *obj);

/////////////////////////////////
//
// Adafruit_GFX
//

// TRANSACTION API / CORE DRAW API
// These MAY be overridden by the subclass to provide device-specific
// optimized code.  Otherwise 'generic' versions are used.
void gfx_startWrite(adafruit_gfx *gfx);
void gfx_writePixel(adafruit_gfx *gfx, int16_t x, int16_t y, uint16_t color);
void gfx_writeFillRect(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void gfx_writeFastVLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t h, uint16_t color);
void gfx_writeFastHLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, uint16_t color);
void gfx_writeLine(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
void gfx_endWrite(adafruit_gfx *gfx);

// CONTROL API
// These MAY be overridden by the subclass to provide device-specific
// optimized code.  Otherwise 'generic' versions are used.
void gfx_setRotation(adafruit_gfx *gfx, uint8_t r);
void gfx_invertDisplay(adafruit_gfx *gfx, bool i);

// BASIC DRAW API
// These MAY be overridden by the subclass to provide device-specific
// optimized code.  Otherwise 'generic' versions are used.

// It's good to implement those, even if using transaction API
void gfx_drawFastVLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t h, uint16_t color);
void gfx_drawFastHLine(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, uint16_t color);
void gfx_fillRect(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void gfx_fillScreen(adafruit_gfx *gfx, uint16_t color);
// Optional and probably not necessary to change
void gfx_drawLine(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
void gfx_drawRect(adafruit_gfx *gfx, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);

// These exist only with Adafruit_GFX (no subclass overrides)
void gfx_drawCircle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint16_t color);
void gfx_drawCircleHelper(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint8_t cornername, uint16_t color);
void gfx_fillCircle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint16_t color);
void gfx_fillCircleHelper(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t r, uint8_t cornername, int16_t delta, uint16_t color);
void gfx_drawTriangle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
void gfx_fillTriangle(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
void gfx_drawRoundRect(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color);
void gfx_fillRoundRect(adafruit_gfx *gfx, int16_t x0, int16_t y0, int16_t w, int16_t h, int16_t radius, uint16_t color);

void gfx_drawBitmap1(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color);
void gfx_drawBitmap2(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color, uint16_t bg);
void gfx_drawBitmap3(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t color);
void gfx_drawBitmap4(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t color, uint16_t bg);

void gfx_drawXBitmap(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color);

void gfx_drawGrayscaleBitmap1(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h);
void gfx_drawGrayscaleBitmap2(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h);
void gfx_drawGrayscaleBitmap3(adafruit_gfx *gfx, int16_t x, int16_t y, const uint8_t bitmap[], const uint8_t mask[], int16_t w, int16_t h);
void gfx_drawGrayscaleBitmap4(adafruit_gfx *gfx, int16_t x, int16_t y, uint8_t *bitmap, uint8_t *mask, int16_t w, int16_t h);

void gfx_drawRGBBitmap1(adafruit_gfx *gfx, int16_t x, int16_t y, const uint16_t bitmap[], int16_t w, int16_t h);
void gfx_drawRGBBitmap2(adafruit_gfx *gfx, int16_t x, int16_t y, uint16_t *bitmap, int16_t w, int16_t h);
void gfx_drawRGBBitmap3(adafruit_gfx *gfx, int16_t x, int16_t y, const uint16_t bitmap[], const uint8_t mask[], int16_t w, int16_t h);
void gfx_drawRGBBitmap4(adafruit_gfx *gfx, int16_t x, int16_t y, uint16_t *bitmap, uint8_t *mask, int16_t w, int16_t h);

void gfx_drawChar1(adafruit_gfx *gfx, int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size);
void gfx_drawChar2(adafruit_gfx *gfx, int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size_x, uint8_t size_y);

void gfx_getTextBounds(adafruit_gfx *gfx, const char *string, int16_t x, int16_t y, int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h);

void gfx_setTextSize(adafruit_gfx *gfx, uint8_t s);
void gfx_setTextSize_xy(adafruit_gfx *gfx, uint8_t sx, uint8_t sy);

void gfx_setFont1(adafruit_gfx *gfx);
void gfx_setFont2(adafruit_gfx *gfx, const void *f);

/**********************************************************************/
/*!
  @brief  Set text cursor location
  @param  x    X coordinate in pixels
  @param  y    Y coordinate in pixels
*/
/**********************************************************************/
void gfx_setCursor(adafruit_gfx *gfx, int16_t x, int16_t y);

/**********************************************************************/
/*!
  @brief   Set text font color with transparant background
  @param   c   16-bit 5-6-5 Color to draw text with
  @note    For 'transparent' background, background and foreground
           are set to same color rather than using a separate flag.
*/
/**********************************************************************/
void gfx_setTextColor(adafruit_gfx *gfx, uint16_t c);

/**********************************************************************/
/*!
  @brief   Set text font color with custom background color
  @param   c   16-bit 5-6-5 Color to draw text with
  @param   bg  16-bit 5-6-5 Color to draw background/fill with
*/
/**********************************************************************/
void gfx_setTextAndBackgroundColor(adafruit_gfx *gfx, uint16_t c, uint16_t bg);

/**********************************************************************/
/*!
@brief  Set whether text that is too long for the screen width should
        automatically wrap around to the next line (else clip right).
@param  w  true for wrapping, false for clipping
*/
/**********************************************************************/
void gfx_setTextWrap(adafruit_gfx *gfx, bool w);

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
void gfx_cp437(adafruit_gfx *gfx, bool x);

void gfx_write(adafruit_gfx *gfx, uint8_t x);

/************************************************************************/
/*!
  @brief      Get width of the display, accounting for current rotation
  @returns    Width in pixels
*/
/************************************************************************/
int16_t gfx_width(adafruit_gfx *gfx);

/************************************************************************/
/*!
  @brief      Get height of the display, accounting for current rotation
  @returns    Height in pixels
*/
/************************************************************************/
int16_t gfx_height(adafruit_gfx *gfx);

/************************************************************************/
/*!
  @brief      Get rotation setting for display
  @returns    0 thru 3 corresponding to 4 cardinal rotations
*/
/************************************************************************/
uint8_t gfx_getRotation(adafruit_gfx *gfx);

// get current cursor position (get rotation safe maximum values,
// using: width() for x, height() for y)
/************************************************************************/
/*!
  @brief  Get text cursor X location
  @returns    X coordinate in pixels
*/
/************************************************************************/
int16_t gfx_getCursorX(adafruit_gfx *gfx);

/************************************************************************/
/*!
  @brief      Get text cursor Y location
  @returns    Y coordinate in pixels
*/
/************************************************************************/
int16_t gfx_getCursorY(adafruit_gfx *gfx);

/////////////////////////////////
//
// Print
//

int gfx_getWriteError(adafruit_gfx *gfx);
void gfx_clearWriteError(adafruit_gfx *gfx);

size_t gfx_write_str(adafruit_gfx *gfx, const char *str);
size_t gfx_writen_u8(adafruit_gfx *gfx, const uint8_t *buffer, size_t size);
size_t gfx_writen_str(adafruit_gfx *gfx, const char *buffer, size_t size);

int gfx_availableForWrite(adafruit_gfx *gfx);

size_t gfx_print(adafruit_gfx *gfx, const char *s);
size_t gfx_print2(adafruit_gfx *gfx, const char s[]);
size_t gfx_print_c(adafruit_gfx *gfx, char c);

size_t gfx_print_uc_base(adafruit_gfx *gfx, unsigned char c, int base);
inline size_t gfx_print_uc(adafruit_gfx *gfx, unsigned char c) { return gfx_print_uc_base(gfx, c, 10); }

size_t gfx_print_i_base(adafruit_gfx *gfx, int i, int base);
inline size_t gfx_print_i(adafruit_gfx *gfx, int i) { return gfx_print_i_base(gfx, i, 10); }

size_t gfx_print_ui_base(adafruit_gfx *gfx, unsigned int ui, int base);
inline size_t gfx_print_ui(adafruit_gfx *gfx, unsigned int ui) { return gfx_print_ui_base(gfx, ui, 10); }

size_t gfx_print_l_base(adafruit_gfx *gfx, long l, int base);
inline size_t gfx_print_l(adafruit_gfx *gfx, long l) { return gfx_print_l_base(gfx, l, 10); }

size_t gfx_print_ul_base(adafruit_gfx *gfx, unsigned long ul, int base);
inline size_t gfx_print_ul(adafruit_gfx *gfx, unsigned long ul) { return gfx_print_ul_base(gfx, ul, 10); }

size_t gfx_print_d_digits(adafruit_gfx *gfx, double, int digits);
inline size_t gfx_print_d(adafruit_gfx *gfx, double d) { return gfx_print_d_digits(gfx, d, 2); }

size_t gfx_println(adafruit_gfx *gfx, const char *s);
size_t gfx_println2(adafruit_gfx *gfx, const char s[]);
size_t gfx_println_c(adafruit_gfx *gfx, char c);

size_t gfx_println_uc_base(adafruit_gfx *gfx, unsigned char uc, int base);
inline size_t gfx_println_uc(adafruit_gfx *gfx, unsigned char uc) {return gfx_println_uc_base(gfx, uc, 10);}

size_t gfx_println_i_base(adafruit_gfx *gfx, int i, int base);
inline size_t gfx_println_i(adafruit_gfx *gfx, int i) {return gfx_println_i_base(gfx, i, 10);}

size_t gfx_println_ui_base(adafruit_gfx *gfx, unsigned int ui, int base);
inline size_t gfx_println_ui(adafruit_gfx *gfx, unsigned int ui) {return gfx_println_ui_base(gfx, ui, 10);}

size_t gfx_println_l_base(adafruit_gfx *gfx, long l, int base);
inline size_t gfx_println_l(adafruit_gfx *gfx, long l) {return gfx_println_l_base(gfx, l, 10);}

size_t gfx_println_ul_base(adafruit_gfx *gfx, unsigned long ul, int base);
inline size_t gfx_println_ul(adafruit_gfx *gfx, unsigned long ul) {return gfx_println_ul_base(gfx, ul, 10);}

size_t gfx_println_d_digits(adafruit_gfx *gfx, double d, int digits);
inline size_t gfx_println_d(adafruit_gfx *gfx, double d) {return gfx_println_d_digits(gfx, d, 2);}

void gfx_flush(adafruit_gfx *gfx);

#ifdef __cplusplus
}
#endif
