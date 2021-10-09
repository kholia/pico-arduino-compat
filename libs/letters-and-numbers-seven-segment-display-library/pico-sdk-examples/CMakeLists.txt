cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(seven-seg-test)

pico_sdk_init()

add_subdirectory(.. build)

add_executable(sevenseg
    main.cpp
)

target_link_libraries(sevenseg
    pico_bootsel_via_double_reset 
    pico_stdlib
    pac-letters-and-numbers-seven-segment-display-library
)

pico_enable_stdio_usb(sevenseg 1)

#pico_set_binary_type(sevenseg no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(sevenseg)

