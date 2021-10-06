add_library(esp32-digital-rgb-led-drivers INTERFACE)

target_sources(esp32-digital-rgb-led-drivers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/src/esp32_digital_led_funcs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/src/fireworks_effects.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/src/esp32_digital_led_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/examples/esp-idf/demo1/main/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/examples/esp-idf/demo1/main/arduinoish.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/examples/esp-idf/demo2/main/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/src/esp32_digital_led_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/src/fireworks_effects.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/src/esp32_digital_led_funcs.h"
)

target_include_directories(esp32-digital-rgb-led-drivers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-Digital-RGB-LED-Drivers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-digital-rgb-led-drivers INTERFACE
    arduino-compat
)
