add_library(pac-plotplus INTERFACE)

target_sources(pac-plotplus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PlotPlus/PlotPlus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlotPlus/simplot.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlotPlus/PlotPlus.h"
)

target_include_directories(pac-plotplus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PlotPlus"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-plotplus INTERFACE
    arduino-compat
)
