add_library(pico-adafruit-ssd1306 INTERFACE)

target_sources(pico-adafruit-ssd1306 INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/adafruit-ssd1306.cpp
    ${CMAKE_CURRENT_LIST_DIR}/adafruit-ssd1306.h
)

target_include_directories(pico-adafruit-ssd1306 INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

add_subdirectory(../pico-adafruit-gfx-library build_pico-adafruit-gfx-library)
add_subdirectory(../../libs/adafruit-ssd1306 build_pac-adafruit-ssd1306)

target_link_libraries(pico-adafruit-ssd1306 INTERFACE
    pico-adafruit-gfx-library
    pac-adafruit-ssd1306
)
