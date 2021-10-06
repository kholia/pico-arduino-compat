add_library(talkingled INTERFACE)

target_sources(talkingled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TalkingLED/src/TalkingLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TalkingLED/src/TalkingLED.h"
)

target_include_directories(talkingled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TalkingLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(talkingled INTERFACE
    arduino-compat
)
