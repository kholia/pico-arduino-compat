add_library(pac-runningaverage INTERFACE)

target_sources(pac-runningaverage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RunningAverage/RunningAverage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RunningAverage/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RunningAverage/RunningAverage.h"
)

target_include_directories(pac-runningaverage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RunningAverage"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-runningaverage INTERFACE
    arduino-compat
)
