add_library(stopwatchlib INTERFACE)

target_sources(stopwatchlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Stopwatch/src/StopwatchLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Stopwatch/src/StopwatchLib.h"
)

target_include_directories(stopwatchlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Stopwatch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stopwatchlib INTERFACE
    arduino-compat
)
