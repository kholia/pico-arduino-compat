add_library(pac-dualmc33926motorshield INTERFACE)

target_sources(pac-dualmc33926motorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dual-mc33926-motor-shield/DualMC33926MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dual-mc33926-motor-shield/DualMC33926MotorShield.h"
)

target_include_directories(pac-dualmc33926motorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dual-mc33926-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dualmc33926motorshield INTERFACE
    arduino-compat
)
