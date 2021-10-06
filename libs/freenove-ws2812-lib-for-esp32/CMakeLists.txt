add_library(freenove-ws2812-lib-for-esp32 INTERFACE)

target_sources(freenove-ws2812-lib-for-esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812_Lib_for_ESP32/src/Freenove_WS2812_Lib_for_ESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812_Lib_for_ESP32/src/led_strip_rmt_ws2812.c"
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812_Lib_for_ESP32/src/Freenove_WS2812_Lib_for_ESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812_Lib_for_ESP32/src/led_strip.h"
)

target_include_directories(freenove-ws2812-lib-for-esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812_Lib_for_ESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(freenove-ws2812-lib-for-esp32 INTERFACE
    arduino-compat
)
