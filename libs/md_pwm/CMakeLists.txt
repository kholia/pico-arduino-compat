add_library(md_pwm INTERFACE)

target_sources(md_pwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_PWM/src/MD_PWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_PWM/src/MD_PWM.h"
)

target_include_directories(md_pwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_PWM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_pwm INTERFACE
    arduino-compat
)
