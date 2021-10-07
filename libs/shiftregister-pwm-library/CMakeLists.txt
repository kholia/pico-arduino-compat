add_library(pac-shiftregister-pwm-library INTERFACE)

target_sources(pac-shiftregister-pwm-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister-PWM-Library/src/ShiftRegisterPWM.h"
)

target_include_directories(pac-shiftregister-pwm-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister-PWM-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shiftregister-pwm-library INTERFACE
    arduino-compat
)
