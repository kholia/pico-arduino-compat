add_library(pac-timedblink INTERFACE)

target_sources(pac-timedblink INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimedBlink/src/TimedBlink.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimedBlink/src/TimedBlink.h"
)

target_include_directories(pac-timedblink INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimedBlink/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timedblink INTERFACE
    arduino-compat
)
