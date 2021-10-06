cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)
project(pico-adafruit-ssd1306-test)
pico_sdk_init()


add_subdirectory(.. build)

#####################################################

add_executable(text_i2c
    text-i2c.c
)

target_compile_options(text_i2c PRIVATE -Wall -Werror -Wno-error=unused-variable -Werror=unused-but-set-variable -Wno-error=unused-value)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(text_i2c 
    pico_bootsel_via_double_reset 
    pico_stdlib
    pico-adafruit-ssd1306
)

pico_set_binary_type(text_i2c no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(text_i2c)

#####################################################

add_executable(graphics_i2c
    ssd1306_128x32_i2c.c
)

target_compile_options(graphics_i2c PRIVATE -Wall -Werror -Wno-error=unused-variable -Werror=unused-but-set-variable -Wno-error=unused-value)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(graphics_i2c 
    pico_bootsel_via_double_reset 
    pico_stdlib
    pico-adafruit-ssd1306
)

pico_set_binary_type(graphics_i2c no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(graphics_i2c)
