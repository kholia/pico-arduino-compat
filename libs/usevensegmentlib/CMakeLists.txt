add_library(pac-usevensegmentlib INTERFACE)

target_sources(pac-usevensegmentlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uSevenSegmentLib/src/uSevenSegmentLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uSevenSegmentLib/src/uSevenSegmentLib.h"
)

target_include_directories(pac-usevensegmentlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uSevenSegmentLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usevensegmentlib INTERFACE
    arduino-compat
)
