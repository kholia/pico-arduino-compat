cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)
project(pico-adafruit-gfx-library-test)
pico_sdk_init()


add_subdirectory(.. build)

add_executable(gfx
    main.cpp
)

target_compile_options(gfx PRIVATE -Wall -Werror -Wno-error=unused-variable -Werror=unused-but-set-variable -Wno-error=unused-value)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(gfx 
    pico_bootsel_via_double_reset 
    pico_stdlib
    pico-adafruit-gfx-library
)

pico_set_binary_type(gfx no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(gfx)
