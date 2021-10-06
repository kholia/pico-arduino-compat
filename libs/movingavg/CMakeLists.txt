add_library(movingavg INTERFACE)

target_sources(movingavg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/movingAvg/src/movingAvg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/movingAvg/src/movingAvg.h"
)

target_include_directories(movingavg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/movingAvg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(movingavg INTERFACE
    arduino-compat
)
