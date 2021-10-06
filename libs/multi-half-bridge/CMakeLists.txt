add_library(multi-half-bridge INTERFACE)

target_sources(multi-half-bridge INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/spic-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/timer-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/spic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/gpio-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/logger-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/logger-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-motor.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-motor-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-conf-opts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/gpio.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/spic-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-conf-dfl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-conf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-types.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112-platf-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/timer-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/spic.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/tle94112.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src/gpio-arduino.hpp"
)

target_include_directories(multi-half-bridge INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-half-bridge/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multi-half-bridge INTERFACE
    arduino-compat
)
