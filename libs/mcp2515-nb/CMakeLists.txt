add_library(mcp2515-nb INTERFACE)

target_sources(mcp2515-nb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-MCP2515-nb/src/MCP2515.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-MCP2515-nb/src/Utilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-MCP2515-nb/src/CANPacket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-MCP2515-nb/src/MCP2515_nb.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-MCP2515-nb/src/CANPacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-MCP2515-nb/src/MCP2515.h"
)

target_include_directories(mcp2515-nb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-MCP2515-nb/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp2515-nb INTERFACE
    arduino-compat
)
