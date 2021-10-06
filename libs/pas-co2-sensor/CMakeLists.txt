add_library(pas-co2-sensor INTERFACE)

target_sources(pas-co2-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pwm-sw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-test-bb-serial-api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-logger-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-uart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-gpio-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-serial-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pulse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-reg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pulse-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-test-bb-pulse-api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-i2c-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-timer-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-uart-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-platf-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-pwm-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-uart-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-platf-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pulse-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-conf-opts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pwm-sw.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-serial.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-uart.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-uart.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-sbus.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-i2c.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-serial-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-types.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-i2c.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-conf-dfl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-test-bb.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-pwm.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pulse.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-gpio.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-logger-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-conf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-timer-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-gpio-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-pwm-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-reg.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src/pas-co2-pal-i2c-ino.hpp"
)

target_include_directories(pas-co2-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-pas-co2-sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pas-co2-sensor INTERFACE
    arduino-compat
)
