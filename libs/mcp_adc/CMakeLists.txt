add_library(mcp_adc INTERFACE)

target_sources(mcp_adc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC/MCP_ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC/MCP_ADC.h"
)

target_include_directories(mcp_adc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp_adc INTERFACE
    arduino-compat
)
