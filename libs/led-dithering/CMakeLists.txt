add_library(pac-led-dithering INTERFACE)

target_sources(pac-led-dithering INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLedDithering/src/led_dither.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLedDithering/src/led_dither.h"
)

target_include_directories(pac-led-dithering INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLedDithering/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-led-dithering INTERFACE
    arduino-compat
)
