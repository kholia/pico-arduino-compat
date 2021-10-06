add_library(lcdgraph INTERFACE)

target_sources(lcdgraph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCDGraph/src/LCDGraph.h"
)

target_include_directories(lcdgraph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCDGraph/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(lcdgraph INTERFACE
    arduino-compat
    official-liquid-crystal
)
