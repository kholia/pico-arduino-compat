add_library(pac-twowheelrobot INTERFACE)

target_sources(pac-twowheelrobot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TwoWheelRobotLibrary/src/TwoWheelRobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TwoWheelRobotLibrary/src/TwoWheelRobot.h"
)

target_include_directories(pac-twowheelrobot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TwoWheelRobotLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-twowheelrobot INTERFACE
    arduino-compat
)
