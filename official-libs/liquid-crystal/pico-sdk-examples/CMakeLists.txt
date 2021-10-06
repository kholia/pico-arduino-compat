cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(official-liquid-crystal-test)

pico_sdk_init()

add_subdirectory(.. build)

add_executable(hw
    HelloWorld/HelloWorld.cpp
)

target_link_libraries(hw
    pico_bootsel_via_double_reset 
    pico_stdlib
    official-liquid-crystal
)

pico_set_binary_type(hw no_flash)

# create map/bin/hex file etc.
pico_add_extra_outputs(hw)

