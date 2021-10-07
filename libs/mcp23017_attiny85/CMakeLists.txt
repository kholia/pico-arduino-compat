add_library(pac-mcp23017_attiny85 INTERFACE)

target_sources(pac-mcp23017_attiny85 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-mcp23017-library/src/MCP23017_Attiny85.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-mcp23017-library/src/MCP23017_Attiny85.h"
)

target_include_directories(pac-mcp23017_attiny85 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-mcp23017-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp23017_attiny85 INTERFACE
    arduino-compat
)
