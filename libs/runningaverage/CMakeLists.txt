add_library(runningaverage INTERFACE)

target_sources(runningaverage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RunningAverage/RunningAverage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RunningAverage/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RunningAverage/RunningAverage.h"
)

target_include_directories(runningaverage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RunningAverage"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(runningaverage INTERFACE
    arduino-compat
)
