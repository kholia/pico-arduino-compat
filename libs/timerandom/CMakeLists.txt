add_library(timerandom INTERFACE)

target_sources(timerandom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimeRandom/src/TimeRandom.h"
)

target_include_directories(timerandom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimeRandom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timerandom INTERFACE
    arduino-compat
)
