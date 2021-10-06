add_library(gyverfilters INTERFACE)

target_sources(gyverfilters INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/runningAverage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/GyverFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/FastFilter.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/alfaBeta.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/median.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/kalman.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/RingAverage.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/runningAverage.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/median3.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src/filters/linear.h"
)

target_include_directories(gyverfilters INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverFilters/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverfilters INTERFACE
    arduino-compat
)
