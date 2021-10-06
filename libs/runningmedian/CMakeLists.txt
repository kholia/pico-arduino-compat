add_library(runningmedian INTERFACE)

target_sources(runningmedian INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RunningMedian/RunningMedian.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RunningMedian/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RunningMedian/RunningMedian.h"
)

target_include_directories(runningmedian INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RunningMedian"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(runningmedian INTERFACE
    arduino-compat
)
