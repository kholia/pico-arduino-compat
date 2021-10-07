add_library(pac-esp32servo INTERFACE)

target_sources(pac-esp32servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/ESP32Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/ESP32PWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/ESP32Tone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/analogWrite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/ESP32Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/ESP32PWM.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/analogWrite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src/ESP32Tone.h"
)

target_include_directories(pac-esp32servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32servo INTERFACE
    arduino-compat
)
