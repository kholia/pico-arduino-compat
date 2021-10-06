add_library(flexiplot-arduino-library INTERFACE)

target_sources(flexiplot-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiPieSeries.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiBarSeries.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiAbstractSeries.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiTimePlot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiPlotBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiXYSeries.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiBarColumn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiBarPlot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiPieChart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiXYPlot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiBarSeries.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiPieChart.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiXYSeries.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiPlotBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiPieSeries.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiBarPlot.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiAbstractSeries.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiPlot.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiTimePlot.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiBarColumn.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src/FlexiXYPlot.h"
)

target_include_directories(flexiplot-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlexiPlot_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flexiplot-arduino-library INTERFACE
    arduino-compat
)
