add_library(pac-hl1606-led-strip-pwm INTERFACE)

target_sources(pac-hl1606-led-strip-pwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HL1606-LED-Strip-PWM/HL1606stripPWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HL1606-LED-Strip-PWM/HL1606stripPWM.h"
)

target_include_directories(pac-hl1606-led-strip-pwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HL1606-LED-Strip-PWM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hl1606-led-strip-pwm INTERFACE
    arduino-compat
)
