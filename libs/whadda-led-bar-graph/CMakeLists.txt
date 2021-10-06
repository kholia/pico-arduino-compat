add_library(whadda-led-bar-graph INTERFACE)

target_sources(whadda-led-bar-graph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bar_graph_module/src/BarGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bar_graph_module/src/BarGraph.h"
)

target_include_directories(whadda-led-bar-graph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bar_graph_module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(whadda-led-bar-graph INTERFACE
    arduino-compat
)
