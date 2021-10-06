/*
    Copyright (c) 2021 FHDM Apps https://github.com/fhdm-dev
*/

#pragma once

#include "api/HardwareSerial.h"

class HardwareSerialStdio : public HardwareSerial {
public:
    void begin(unsigned long) override;
    void begin(unsigned long, uint16_t) override;
    void end();
    int available(void);
    int peek(void);
    int read(void);
    int availableForWrite(void);
    void flush(void);
    size_t write(uint8_t);
    operator bool() override;

private:
    int peeked = -1;
    void read_next_char();    
};
