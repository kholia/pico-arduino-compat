add_library(pac-m10pwm INTERFACE)

target_sources(pac-m10pwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10PWM/src/M10PWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10PWM/src/M10PWM.h"
)

target_include_directories(pac-m10pwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10PWM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10pwm INTERFACE
    arduino-compat
)
