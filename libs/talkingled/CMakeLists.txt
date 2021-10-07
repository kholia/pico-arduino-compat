add_library(pac-talkingled INTERFACE)

target_sources(pac-talkingled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TalkingLED/src/TalkingLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TalkingLED/src/TalkingLED.h"
)

target_include_directories(pac-talkingled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TalkingLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-talkingled INTERFACE
    arduino-compat
)
