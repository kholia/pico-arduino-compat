/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"
//
#include "liquid-crystal.h"

/** 
 *   PICO GPIO - LCD PIN
 *   12          RS
 *   11          EN
 *   5           D4
 *   2           D5
 *   3           D6
 *   2           D7
 * 
 *   Other LCD pins
 *   VSS     GND
 *   VCC     3.3V (pin 36 on the Pico) 
 *   VO      Somewhere between 0V (most contrast) and 3.3V (least contrast - text probably wont be visible)
 *   R/W     GND
 *   LED+    3.3V via a current limiting resistor eg 220R
 *   LED-    GND 
 */

int main() {
    sleep_ms(100);
    stdio_init_all();
    sleep_ms(100);
    printf("pico-cpp-test\n");

    /*
    liquid_crystal *lcd = lcd_create(12, 11, 5, 4, 3, 2);
    lcd_begin(lcd, 16, 2);
    lcd_clear(lcd);
    lcd_print(lcd, "Waiting....");
    sleep_ms(2000);
    lcd_set_cursor(lcd, 0, 0);
    lcd_print(lcd, "Hello World!");
    sleep_ms(2000);
    */

    // Call functions via pointers in the struct
    liquid_crystal_fp *lc = liquid_crystal_create(12, 11, 5, 4, 3, 2);
    lc->begin(lc, 16, 2);
    lc->clear(lc);
    lc->print(lc, "OOOOOOOOO....");
    sleep_ms(2000);
    lc->set_cursor(lc, 0, 1);
    lc->print(lc, "Hello OO World!");

    while(1) {tight_loop_contents();}
    return 0;
}
