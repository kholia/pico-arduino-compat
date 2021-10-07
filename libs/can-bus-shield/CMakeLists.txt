add_library(pac-can-bus-shield INTERFACE)

target_sources(pac-can-bus-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp2515_can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp_can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp2518fd_can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/can-serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp_can.h"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp2518fd_can.h"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp2518fd_can_dfs.h"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/can-serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp2515_can.h"
  "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src/mcp2515_can_dfs.h"
)

target_include_directories(pac-can-bus-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CAN_BUS_Shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-can-bus-shield INTERFACE
    arduino-compat
)
