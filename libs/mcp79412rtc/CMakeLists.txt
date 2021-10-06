add_library(mcp79412rtc INTERFACE)

target_sources(mcp79412rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCP79412RTC/src/MCP79412RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCP79412RTC/src/MCP79412RTC.h"
)

target_include_directories(mcp79412rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCP79412RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcp79412rtc INTERFACE
    arduino-compat
)
