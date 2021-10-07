add_library(pac-lcdgraph INTERFACE)

target_sources(pac-lcdgraph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCDGraph/src/LCDGraph.h"
)

target_include_directories(pac-lcdgraph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCDGraph/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-lcdgraph INTERFACE
    arduino-compat
    pac-liquidcrystal
)
