add_library(high-side-switch INTERFACE)

target_sources(high-side-switch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/test/test_library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/test/test_high-side-switch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/hss-board-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/hss-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/utils/filter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/pal/gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/pal/adc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/config/variants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/pal/adc-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/pal/timer-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/pal/gpio-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/wrapper/config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/corelib/hss-board.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/corelib/hss.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/hss-board-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/hss-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/utils/filter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/pal/adc.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/pal/gpio.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/pal/timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/config/variants.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/pal/adc-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/pal/timer-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/pal/gpio-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/framework/arduino/wrapper/config.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/corelib/hss.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src/corelib/hss-board.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/test/fakes/fff.h"
)

target_include_directories(high-side-switch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/high-side-switch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(high-side-switch INTERFACE
    arduino-compat
)
