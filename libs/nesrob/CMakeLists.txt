add_library(nesrob INTERFACE)

target_sources(nesrob INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/test/led_ntsc_driver.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/test/NesRob.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/test/signal_generator.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/test/w_wave_driver.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/w_wave_driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/signal_generator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/hal_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/signal_generator_error.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/pulse_driver_error.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/arduino_debug_driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/led_ntsc_driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/NesRob_Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/hal_error.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/pulse_driver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/arduino_debug_driver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/hal_arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/w_wave_driver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/signal_generator_error.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/pulse_driver_error.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/hal_error.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/led_ntsc_driver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/hardware_abstraction_layer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/signal_generator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src/NesRob.h"
)

target_include_directories(nesrob INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nes-rob/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nesrob INTERFACE
    arduino-compat
)
