/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/


#include "liquid-crystal.h"
#include "LiquidCrystal.h"

struct liquid_crystal {
	void *obj;
};

liquid_crystal *lcd_create(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3) {
    liquid_crystal *lcd = (liquid_crystal*)malloc(sizeof(liquid_crystal));
    lcd->obj = new LiquidCrystal(rs, enable, d0, d1, d2, d3);
    return lcd;
}

void lcd_destroy(liquid_crystal *lcd) {
    delete static_cast<LiquidCrystal *>(lcd->obj);
	free(lcd);
}

void lcd_begin(liquid_crystal *lcd, uint8_t cols, uint8_t rows) {
    (static_cast<LiquidCrystal *>(lcd->obj))->begin(cols, rows, LCD_5x8DOTS);
}

//void lcd_begin_with_charsize(liquid_crystal *lcd, uint8_t cols, uint8_t rows, uint8_t charsize = LCD_5x8DOTS) {
//}

void lcd_clear(liquid_crystal *lcd) {
    (static_cast<LiquidCrystal *>(lcd->obj))->clear();
}

void lcd_set_cursor(liquid_crystal *lcd, uint8_t col, uint8_t row) {
    (static_cast<LiquidCrystal *>(lcd->obj))->setCursor(col, row);
}

void lcd_print(liquid_crystal *lcd, const char *str) {
    (static_cast<LiquidCrystal *>(lcd->obj))->print(str);
}

//=====================================================================
// Wrapper that uses function pointers (fp)

static void fp_begin(liquid_crystal_fp *lcd, uint8_t cols, uint8_t rows) {
    (static_cast<LiquidCrystal *>(lcd->obj))->begin(cols, rows, LCD_5x8DOTS);
}

static void fp_clear(liquid_crystal_fp *lcd) {
    (static_cast<LiquidCrystal *>(lcd->obj))->clear();
}

static void fp_set_cursor(liquid_crystal_fp *lcd, uint8_t col, uint8_t row) {
    (static_cast<LiquidCrystal *>(lcd->obj))->setCursor(col, row);
}

static void fp_print(liquid_crystal_fp *lcd, const char *str) {
    (static_cast<LiquidCrystal *>(lcd->obj))->print(str);
}

liquid_crystal_fp *liquid_crystal_create(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3) {
    liquid_crystal_fp *lcd = (liquid_crystal_fp*)malloc(sizeof(liquid_crystal_fp));
    lcd->obj = new LiquidCrystal(rs, enable, d0, d1, d2, d3);

    lcd->begin = fp_begin;
    lcd->clear = fp_clear;
    lcd->set_cursor = fp_set_cursor;
    lcd->print = fp_print;

    return lcd;
}
