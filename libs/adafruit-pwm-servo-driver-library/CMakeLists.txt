add_library(pac-adafruit-pwm-servo-driver-library INTERFACE)

target_sources(pac-adafruit-pwm-servo-driver-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PWM-Servo-Driver-Library/Adafruit_PWMServoDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PWM-Servo-Driver-Library/Adafruit_PWMServoDriver.h"
)

target_include_directories(pac-adafruit-pwm-servo-driver-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PWM-Servo-Driver-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-pwm-servo-driver-library INTERFACE
    arduino-compat
)
