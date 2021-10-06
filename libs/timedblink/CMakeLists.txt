add_library(timedblink INTERFACE)

target_sources(timedblink INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimedBlink/src/TimedBlink.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimedBlink/src/TimedBlink.h"
)

target_include_directories(timedblink INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimedBlink/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timedblink INTERFACE
    arduino-compat
)
