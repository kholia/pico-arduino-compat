add_library(sparkfun-bar-graph-library INTERFACE)

target_sources(sparkfun-bar-graph-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Bar_Graph_Breakout_Arduino_Library/src/SparkFunBarGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Bar_Graph_Breakout_Arduino_Library/src/SparkFunBarGraph.h"
)

target_include_directories(sparkfun-bar-graph-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Bar_Graph_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-bar-graph-library INTERFACE
    arduino-compat
)
