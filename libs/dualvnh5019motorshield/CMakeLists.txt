add_library(pac-dualvnh5019motorshield INTERFACE)

target_sources(pac-dualvnh5019motorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dual-vnh5019-motor-shield/DualVNH5019MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dual-vnh5019-motor-shield/DualVNH5019MotorShield.h"
)

target_include_directories(pac-dualvnh5019motorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dual-vnh5019-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dualvnh5019motorshield INTERFACE
    arduino-compat
)
