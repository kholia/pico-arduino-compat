add_library(pac-timerandom INTERFACE)

target_sources(pac-timerandom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimeRandom/src/TimeRandom.h"
)

target_include_directories(pac-timerandom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimeRandom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timerandom INTERFACE
    arduino-compat
)
