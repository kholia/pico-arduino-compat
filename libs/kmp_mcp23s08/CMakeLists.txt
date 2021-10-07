add_library(pac-kmp_mcp23s08 INTERFACE)

target_sources(pac-kmp_mcp23s08 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KMP_MCP23S08/KMP_MCP23S08.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KMP_MCP23S08/KMP_MCP23S08.h"
)

target_include_directories(pac-kmp_mcp23s08 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KMP_MCP23S08"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kmp_mcp23s08 INTERFACE
    arduino-compat
)
