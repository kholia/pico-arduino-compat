add_library(107-arduino-mcp2515 INTERFACE)

target_sources(107-arduino-mcp2515 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/ArduinoMCP2515.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/MCP2515/MCP2515_Io.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/MCP2515/MCP2515_Config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/MCP2515/MCP2515_Control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/ArduinoMCP2515.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/MCP2515/MCP2515_Const.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/MCP2515/MCP2515_Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/MCP2515/MCP2515_Control.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src/MCP2515/MCP2515_Io.h"
)

target_include_directories(107-arduino-mcp2515 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-MCP2515/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(107-arduino-mcp2515 INTERFACE
    arduino-compat
)
