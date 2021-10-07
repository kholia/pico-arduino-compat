add_library(pac-whadda-led-bar-graph INTERFACE)

target_sources(pac-whadda-led-bar-graph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bar_graph_module/src/BarGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bar_graph_module/src/BarGraph.h"
)

target_include_directories(pac-whadda-led-bar-graph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bar_graph_module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-whadda-led-bar-graph INTERFACE
    arduino-compat
)
