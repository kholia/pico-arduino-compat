add_library(samd_isr_servo INTERFACE)

target_sources(samd_isr_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_ISR_Servo/src/SAMD_FastTimerInterrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_ISR_Servo/src/SAMD_ISR_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_ISR_Servo/src/SAMD_ISR_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_ISR_Servo/src/SAMD_ISR_Servo_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_ISR_Servo/src/SAMD_FastTimerInterrupt.h"
)

target_include_directories(samd_isr_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SAMD_ISR_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(samd_isr_servo INTERFACE
    arduino-compat
)
