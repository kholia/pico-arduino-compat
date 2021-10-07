add_library(pac-stopwatchlib INTERFACE)

target_sources(pac-stopwatchlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Stopwatch/src/StopwatchLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Stopwatch/src/StopwatchLib.h"
)

target_include_directories(pac-stopwatchlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Stopwatch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stopwatchlib INTERFACE
    arduino-compat
)
