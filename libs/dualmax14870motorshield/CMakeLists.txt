add_library(pac-dualmax14870motorshield INTERFACE)

target_sources(pac-dualmax14870motorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dual-max14870-motor-shield/DualMAX14870MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dual-max14870-motor-shield/DualMAX14870MotorShield.h"
)

target_include_directories(pac-dualmax14870motorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dual-max14870-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dualmax14870motorshield INTERFACE
    arduino-compat
)
