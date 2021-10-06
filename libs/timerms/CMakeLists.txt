add_library(timerms INTERFACE)

target_sources(timerms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerMs/src/TimerMs.h"
)

target_include_directories(timerms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerMs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerms INTERFACE
    arduino-compat
)
