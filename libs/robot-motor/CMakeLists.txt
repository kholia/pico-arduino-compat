add_library(robot-motor INTERFACE)

target_sources(robot-motor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/ArduinoRobotMotorBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/EasyTransfer2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/lineFollow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/Multiplexer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/EasyTransfer2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/Multiplexer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/LineFollow.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src/ArduinoRobotMotorBoard.h"
)

target_include_directories(robot-motor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robot_Motor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robot-motor INTERFACE
    arduino-compat
)
