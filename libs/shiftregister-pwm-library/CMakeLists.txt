add_library(shiftregister-pwm-library INTERFACE)

target_sources(shiftregister-pwm-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister-PWM-Library/src/ShiftRegisterPWM.h"
)

target_include_directories(shiftregister-pwm-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister-PWM-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shiftregister-pwm-library INTERFACE
    arduino-compat
)
