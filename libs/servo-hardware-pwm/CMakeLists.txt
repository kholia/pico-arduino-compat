add_library(pac-servo-hardware-pwm INTERFACE)

target_sources(pac-servo-hardware-pwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Servo-Hardware-PWM-Library/src/Servo_Hardware_PWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Servo-Hardware-PWM-Library/src/Servo_Hardware_PWM.h"
)

target_include_directories(pac-servo-hardware-pwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Servo-Hardware-PWM-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-servo-hardware-pwm INTERFACE
    arduino-compat
)
