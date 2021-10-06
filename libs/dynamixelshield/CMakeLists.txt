add_library(dynamixelshield INTERFACE)

target_sources(dynamixelshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/DynamixelShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/util/RobotisRemoteController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/DynamixelShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src/util/RobotisRemoteController.h"
)

target_include_directories(dynamixelshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DynamixelShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dynamixelshield INTERFACE
    arduino-compat
)
