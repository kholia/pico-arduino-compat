add_library(sleepy-pi-2 INTERFACE)

target_sources(sleepy-pi-2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SleepyPi2/SleepyPi2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SleepyPi2/SleepyPi2.h"
)

target_include_directories(sleepy-pi-2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SleepyPi2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sleepy-pi-2 INTERFACE
    arduino-compat
)
