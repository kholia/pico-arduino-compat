add_library(movingaverage INTERFACE)

target_sources(movingaverage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverage/MovingAverage.h"
)

target_include_directories(movingaverage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MovingAverage"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(movingaverage INTERFACE
    arduino-compat
)
