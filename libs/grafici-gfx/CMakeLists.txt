add_library(pac-grafici-gfx INTERFACE)

target_sources(pac-grafici-gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Grafici.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Color_defs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Color_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Boundary.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSource.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Color.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Grafici.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataVector.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Range.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSources/BarIndex.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSources/Array.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSources/Histogram.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSources/Linear.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSources/Select.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSources/Parametric.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSources/Constant.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSets/LinearInterpolator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/DataSets/SplineInterpolator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Line.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Scatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Cliquegraph.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Cellmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Axis.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Bubblemap.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Bar.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src/Plotter/Heatmap.h"
)

target_include_directories(pac-grafici-gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grafici-GFX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-grafici-gfx INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
