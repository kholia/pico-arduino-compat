cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)
project(pico-official-liquid-crystal-test)
pico_sdk_init()

add_subdirectory(.. build)

add_executable(lq
    main.cpp
)

#target_compile_options(lq PRIVATE -Wall -Werror -Wno-error=unused-variable -Wno-error=unused-function)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(lq 
    pico_bootsel_via_double_reset 
    pico_stdlib
    pico-official-liquid-crystal
)

pico_set_binary_type(lq no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(lq)
