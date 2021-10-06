add_library(xlr8neopixel INTERFACE)

target_sources(xlr8neopixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8NeoPixel/src/XLR8NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8NeoPixel/src/XLR8NeoPixel.h"
)

target_include_directories(xlr8neopixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8NeoPixel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(xlr8neopixel INTERFACE
    arduino-compat
    adafruit-gfx-library
)
