add_library(pac-motor-shield-v2.0 INTERFACE)

target_sources(pac-motor-shield-v2.0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SeeedMotorShieldV2/MotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SeeedMotorShieldV2/seeed_pwm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SeeedMotorShieldV2/MotorDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/SeeedMotorShieldV2/seeed_pwm.h"
)

target_include_directories(pac-motor-shield-v2.0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SeeedMotorShieldV2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-motor-shield-v2.0 INTERFACE
    arduino-compat
)
