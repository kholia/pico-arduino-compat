add_library(pac-esp8266_led_64x16_matrix INTERFACE)

target_sources(pac-esp8266_led_64x16_matrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_LED_64x16_Matrix/src/ESP8266_LED_64x16_Matrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_LED_64x16_Matrix/src/ESP8266_LED_64x16_Matrix.h"
)

target_include_directories(pac-esp8266_led_64x16_matrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266_LED_64x16_Matrix/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266_led_64x16_matrix INTERFACE
    arduino-compat
)
