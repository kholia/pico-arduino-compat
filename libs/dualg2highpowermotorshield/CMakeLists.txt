add_library(pac-dualg2highpowermotorshield INTERFACE)

target_sources(pac-dualg2highpowermotorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dual-g2-high-power-motor-shield/DualG2HighPowerMotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dual-g2-high-power-motor-shield/DualG2HighPowerMotorShield.h"
)

target_include_directories(pac-dualg2highpowermotorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dual-g2-high-power-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dualg2highpowermotorshield INTERFACE
    arduino-compat
)
