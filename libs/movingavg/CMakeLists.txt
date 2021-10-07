add_library(pac-movingavg INTERFACE)

target_sources(pac-movingavg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/movingAvg/src/movingAvg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/movingAvg/src/movingAvg.h"
)

target_include_directories(pac-movingavg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/movingAvg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-movingavg INTERFACE
    arduino-compat
)
