cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(adafruit-ssd1306-examples)

pico_sdk_init()

add_subdirectory(.. build)

add_executable(text
    text-i2c.cpp
)

target_link_libraries(text
    pico_bootsel_via_double_reset 
    pac-adafruit-ssd1306
)

pico_set_binary_type(text no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(text)

########################################

add_executable(graphics
    ssd1306_128x32_i2c.cpp
)

target_link_libraries(graphics
    pico_bootsel_via_double_reset 
    pac-adafruit-ssd1306
)

pico_set_binary_type(graphics no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(graphics)

