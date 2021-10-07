add_library(pac-samd21-turbo-pwm INTERFACE)

target_sources(pac-samd21-turbo-pwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SAMD21_turbo_PWM/src/SAMD21turboPWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SAMD21_turbo_PWM/src/SAMD21turboPWM.h"
)

target_include_directories(pac-samd21-turbo-pwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SAMD21_turbo_PWM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-samd21-turbo-pwm INTERFACE
    arduino-compat
)
