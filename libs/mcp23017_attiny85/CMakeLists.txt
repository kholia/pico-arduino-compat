add_library(mcp23017_attiny85 INTERFACE)

target_sources(mcp23017_attiny85 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-mcp23017-library/src/MCP23017_Attiny85.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-mcp23017-library/src/MCP23017_Attiny85.h"
)

target_include_directories(mcp23017_attiny85 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-mcp23017-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp23017_attiny85 INTERFACE
    arduino-compat
)
