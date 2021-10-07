add_library(pac-sevensegmentpanel INTERFACE)

target_sources(pac-sevensegmentpanel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentPanel/src/SevenSegmentPanel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentPanel/src/SevenSegmentPanel.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentPanel/src/basic_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentPanel/src/basic_r_font.h"
)

target_include_directories(pac-sevensegmentpanel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSegmentPanel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevensegmentpanel INTERFACE
    arduino-compat
)
