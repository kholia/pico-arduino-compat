add_library(pac-xlr8neopixel INTERFACE)

target_sources(pac-xlr8neopixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8NeoPixel/src/XLR8NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8NeoPixel/src/XLR8NeoPixel.h"
)

target_include_directories(pac-xlr8neopixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8NeoPixel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-xlr8neopixel INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
