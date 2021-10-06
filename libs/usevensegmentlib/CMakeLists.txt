add_library(usevensegmentlib INTERFACE)

target_sources(usevensegmentlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uSevenSegmentLib/src/uSevenSegmentLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uSevenSegmentLib/src/uSevenSegmentLib.h"
)

target_include_directories(usevensegmentlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uSevenSegmentLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(usevensegmentlib INTERFACE
    arduino-compat
)
