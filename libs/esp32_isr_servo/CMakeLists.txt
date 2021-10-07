add_library(pac-esp32_isr_servo INTERFACE)

target_sources(pac-esp32_isr_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_ISR_Servo/src/ESP32_ISR_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_ISR_Servo/src/ESP32_ISR_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_ISR_Servo/src/ESP32FastTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_ISR_Servo/examples/ESP32_BlynkServoControl/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_ISR_Servo/examples/ESP32_BlynkServoControl/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_ISR_Servo/examples/ESP32_BlynkServoControl/Credentials.h"
)

target_include_directories(pac-esp32_isr_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_ISR_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32_isr_servo INTERFACE
    arduino-compat
)
