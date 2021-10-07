add_library(pac-dynamixelshield INTERFACE)

target_sources(pac-dynamixelshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/DynamixelShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/util/RobotisRemoteController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/DynamixelShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/util/RobotisRemoteController.h"
)

target_include_directories(pac-dynamixelshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dynamixelshield INTERFACE
    arduino-compat
)
