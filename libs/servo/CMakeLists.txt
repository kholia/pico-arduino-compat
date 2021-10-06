add_library(servo INTERFACE)

target_sources(servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/avr/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/stm32f4/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/megaavr/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/nrf52/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/sam/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/mbed/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/samd/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/avr/ServoTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/stm32f4/ServoTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/megaavr/ServoTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/nrf52/ServoTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/sam/ServoTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/mbed/ServoTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Servo/src/samd/ServoTimers.h"
)

target_include_directories(servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(servo INTERFACE
    arduino-compat
)
