add_library(pac-sparkfun-mcp9600-thermocouple-library INTERFACE)

target_sources(pac-sparkfun-mcp9600-thermocouple-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MCP9600_Arduino_Library/src/SparkFun_MCP9600.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MCP9600_Arduino_Library/src/SparkFun_MCP9600.h"
)

target_include_directories(pac-sparkfun-mcp9600-thermocouple-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MCP9600_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-mcp9600-thermocouple-library INTERFACE
    arduino-compat
)
