add_library(pac-letters-and-numbers-seven-segment-display-library INTERFACE)

target_sources(pac-letters-and-numbers-seven-segment-display-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Letters-and-Numbers-Seven-Segment-Display-Library/SevenSegmentDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Letters-and-Numbers-Seven-Segment-Display-Library/SevenSegmentDisplay.h"
)

target_include_directories(pac-letters-and-numbers-seven-segment-display-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Letters-and-Numbers-Seven-Segment-Display-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-letters-and-numbers-seven-segment-display-library INTERFACE
    arduino-compat
)
