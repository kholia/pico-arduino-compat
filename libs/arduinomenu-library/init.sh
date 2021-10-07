#!/bin/sh
git submodule update --init ../../libs/arduinomenu-library/ArduinoMenu
../../libs/sd/init.sh
../../libs/adafruit-gfx-library/init.sh
../../libs/liquidcrystal/init.sh
