add_library(pac-mcp_adc INTERFACE)

target_sources(pac-mcp_adc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC/MCP_ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC/MCP_ADC.h"
)

target_include_directories(pac-mcp_adc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP_ADC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp_adc INTERFACE
    arduino-compat
)
