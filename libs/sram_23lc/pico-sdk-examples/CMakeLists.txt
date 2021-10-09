cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(mattairtech-SRAM_23LC-test)

pico_sdk_init()

add_subdirectory(.. build)

add_executable(sram
    SRAM_Example.cpp
)

target_link_libraries(sram
    pico_bootsel_via_double_reset 
    pico_stdlib
    pac-sram_23lc
)

pico_enable_stdio_usb(sram 1)

#pico_set_binary_type(sram no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(sram)

