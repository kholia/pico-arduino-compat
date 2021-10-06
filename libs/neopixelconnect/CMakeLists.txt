add_library(neopixelconnect INTERFACE)

target_sources(neopixelconnect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src/NeoPixelConnect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src/ws2812.pio.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src/NeoPixelConnect.h"
)

target_include_directories(neopixelconnect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neopixelconnect INTERFACE
    arduino-compat
)
