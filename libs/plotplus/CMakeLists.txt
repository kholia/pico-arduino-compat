add_library(plotplus INTERFACE)

target_sources(plotplus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PlotPlus/PlotPlus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlotPlus/simplot.h"
  "${CMAKE_CURRENT_LIST_DIR}/PlotPlus/PlotPlus.h"
)

target_include_directories(plotplus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PlotPlus"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(plotplus INTERFACE
    arduino-compat
)
