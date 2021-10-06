add_library(xlr8pwm INTERFACE)

target_sources(xlr8pwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8PWM/src/XLR8PWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8PWM/src/XLR8PWM.h"
)

target_include_directories(xlr8pwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8PWM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8pwm INTERFACE
    arduino-compat
)
