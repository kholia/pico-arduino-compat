cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake)
project(arduino-compat-test)
pico_sdk_init()
add_subdirectory(.. build_ac)
add_executable(test main.cpp)
target_link_libraries(test arduino-compat)
