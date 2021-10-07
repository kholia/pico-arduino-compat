add_library(pac-neopixelconnect INTERFACE)

target_sources(pac-neopixelconnect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src/NeoPixelConnect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src/ws2812.pio.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src/NeoPixelConnect.h"
)

target_include_directories(pac-neopixelconnect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoPixelConnect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neopixelconnect INTERFACE
    arduino-compat
)
