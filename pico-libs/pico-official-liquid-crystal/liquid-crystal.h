/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/

#pragma once

#include <stdint.h>

// https://nachtimwald.com/2017/08/18/wrapping-c-objects-in-c/

#ifdef __cplusplus
extern "C" {
#endif

//
// This method of wrapping a C++ api uses functions in global scope 
//

struct liquid_crystal;
typedef struct liquid_crystal liquid_crystal;

liquid_crystal *lcd_create(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3);
void lcd_destroy(liquid_crystal *lcd);

void lcd_begin(liquid_crystal *lcd, uint8_t cols, uint8_t rows);
void lcd_clear(liquid_crystal *lcd);
void lcd_set_cursor(liquid_crystal *lcd, uint8_t col, uint8_t row);
void lcd_print(liquid_crystal *lcd, const char *str);

//
// This method of wrapping a C++ api uses functions pointers. The functions are called
// via the struct
//

struct liquid_crystal_fp;
typedef struct liquid_crystal_fp {
    void (*begin)(liquid_crystal_fp *lcd, uint8_t cols, uint8_t rows);
    void (*clear)(liquid_crystal_fp *lcd);
    void (*set_cursor)(liquid_crystal_fp *lcd, uint8_t col, uint8_t row);
    void (*print)(liquid_crystal_fp *lcd, const char *str);

    // the Arduino libary object
    void *obj;
} liquid_crystal_fp;

liquid_crystal_fp *liquid_crystal_create(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3);


#ifdef __cplusplus
}
#endif
