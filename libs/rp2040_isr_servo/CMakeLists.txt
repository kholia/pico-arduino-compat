add_library(rp2040_isr_servo INTERFACE)

target_sources(rp2040_isr_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_ISR_Servo/src/RP2040_ISR_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_ISR_Servo/src/RP2040_ISR_Servo_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_ISR_Servo/src/RP2040_ISR_Servo.h"
)

target_include_directories(rp2040_isr_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RP2040_ISR_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rp2040_isr_servo INTERFACE
    arduino-compat
)
