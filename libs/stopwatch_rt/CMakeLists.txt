add_library(stopwatch_rt INTERFACE)

target_sources(stopwatch_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StopWatch_RT/StopWatch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StopWatch_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StopWatch_RT/StopWatch.h"
)

target_include_directories(stopwatch_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StopWatch_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stopwatch_rt INTERFACE
    arduino-compat
)
