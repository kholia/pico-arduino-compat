add_library(pac-movingaverager INTERFACE)

target_sources(pac-movingaverager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverage/demo/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverage/test/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverage/src/MovingAverage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverage/src/MovingAverage.h"
)

target_include_directories(pac-movingaverager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MovingAverage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-movingaverager INTERFACE
    arduino-compat
)
