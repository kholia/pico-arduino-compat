/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/


#include "HardwareSerialStdio.h"
#include "pico/stdio.h"
#include <assert.h>
#include <stdio.h>

void HardwareSerialStdio::begin(unsigned long baud) {
}

void HardwareSerialStdio::begin(unsigned long baud, uint16_t config) {
}

void HardwareSerialStdio::end() {
    //
}

int HardwareSerialStdio::available(void) {
    // warning: not tested
    read_next_char();
    return peeked >= 0 ? 1 : 0;
}

int HardwareSerialStdio::peek(void) {
    // warning: not tested
    read_next_char();
    return peeked;
}

int HardwareSerialStdio::read(void) {
    // warning: not tested
    read_next_char();
    if (peeked >= 0) {
        int val = peeked;
        peeked = -1;
        return val;
    }

    return -1;
}

int HardwareSerialStdio::availableForWrite(void) { return 128; }

void HardwareSerialStdio::flush(void) { stdio_flush(); }

size_t HardwareSerialStdio::write(uint8_t c) {
    ::putchar(c);
    return 1;
}

size_t HardwareSerialStdio::write(uint8_t *c, uint8_t n) {
    for (int i = 0; i < n; i++)
      ::putchar(c[i]);
    return n;
}

void HardwareSerialStdio::read_next_char() {
    if (peeked >= 0) {
        // We already have a character
        return;
    }

    // getchar_timeout_us returns less than 0 if nothing can be read in time
    // ie. PICO_ERROR_<something>
    peeked = getchar_timeout_us(10000); // 10ms
    if (peeked < -1) {
        // normalise
        peeked = -1;
    }
}

HardwareSerialStdio::operator bool() {
    // fixme
    return true;
}

HardwareSerialStdio Serial();
