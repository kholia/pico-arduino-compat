add_library(pac-mcp3208 INTERFACE)

target_sources(pac-mcp3208 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mcp3208/src/Mcp320x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mcp3208/src/Mcp320x.h"
)

target_include_directories(pac-mcp3208 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mcp3208/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcp3208 INTERFACE
    arduino-compat
)
