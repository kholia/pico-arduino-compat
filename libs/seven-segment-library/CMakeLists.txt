add_library(seven-segment-library INTERFACE)

target_sources(seven-segment-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegment/src/SegmentDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegment/src/SegmentDisplay.h"
)

target_include_directories(seven-segment-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSegment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seven-segment-library INTERFACE
    arduino-compat
)
