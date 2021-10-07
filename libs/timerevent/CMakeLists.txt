add_library(pac-timerevent INTERFACE)

target_sources(pac-timerevent INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimerEvent/src/TimerEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimerEvent/src/TimerEvent.h"
)

target_include_directories(pac-timerevent INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimerEvent/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timerevent INTERFACE
    arduino-compat
)
