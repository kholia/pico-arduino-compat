add_library(led-dithering INTERFACE)

target_sources(led-dithering INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLedDithering/src/led_dither.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLedDithering/src/led_dither.h"
)

target_include_directories(led-dithering INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLedDithering/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(led-dithering INTERFACE
    arduino-compat
)
