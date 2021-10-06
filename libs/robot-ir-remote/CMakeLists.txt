add_library(robot-ir-remote INTERFACE)

target_sources(robot-ir-remote INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RobotIRremote/src/IRremote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotIRremote/src/IRremoteTools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotIRremote/src/RobotIRremote.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotIRremote/src/RobotIRremoteInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotIRremote/src/RobotIRremoteTools.h"
)

target_include_directories(robot-ir-remote INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RobotIRremote/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robot-ir-remote INTERFACE
    arduino-compat
)
