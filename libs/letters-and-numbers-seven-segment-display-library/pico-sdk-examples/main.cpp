#include "Arduino.h"
#include "SevenSegmentDisplay.h"
#include <tusb.h>
#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"

int main() {
    stdio_init_all();

    while (!tud_cdc_connected()) {
        sleep_ms(100);
    }

    Serial.println("Letters and Numbers Seven Segment Display");

    SevenSegmentDisplay screenName(14, 15, 16, 20, 19, 13, 12, 9, false);
    Serial.println("  initialised\n");

    const char *str = "abc123";

    while(1) {
        for (int i = 0; i < strlen(str); i++) {
            screenName.displayCharacter(str[i]);
            sleep_ms(5000);
        }
    }

    return 0;
}
