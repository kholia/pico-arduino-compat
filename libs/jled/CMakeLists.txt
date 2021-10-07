add_library(pac-jled INTERFACE)

target_sources(pac-jled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_arduino_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_esp32_mock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_mbed_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_arduino_mock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_esp8266_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_example_morse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_jled_sequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_esp32_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/mbed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_jled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/test_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/esp32_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/jled_base.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/examples/raspi_pico/pico_demo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/examples/multiled_mbed/multiled_mbed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/hal_mock.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/mbed.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/test/esp32.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/jled_base.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/esp32_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/jled.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/mbed_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/arduino_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/pico_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/src/esp8266_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/examples/morse/morse_effect.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/examples/morse/morse.h"
  "${CMAKE_CURRENT_LIST_DIR}/jled/examples/morse/bitset.h"
)

target_include_directories(pac-jled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jled/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jled INTERFACE
    arduino-compat
)
