add_library(pac-uulm-mcp23008-core INTERFACE)

target_sources(pac-uulm-mcp23008-core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uulm_mcp23008_core/src/MCP23008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uulm_mcp23008_core/src/MCP23008.h"
)

target_include_directories(pac-uulm-mcp23008-core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uulm_mcp23008_core/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-uulm-mcp23008-core INTERFACE
    arduino-compat
)
