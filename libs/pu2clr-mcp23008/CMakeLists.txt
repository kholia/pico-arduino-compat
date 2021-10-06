add_library(pu2clr-mcp23008 INTERFACE)

target_sources(pu2clr-mcp23008 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP23008/pu2clr_mcp23008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP23008/pu2clr_mcp23008.h"
)

target_include_directories(pu2clr-mcp23008 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP23008"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pu2clr-mcp23008 INTERFACE
    arduino-compat
)
