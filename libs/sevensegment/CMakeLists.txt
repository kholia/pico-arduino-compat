add_library(pac-sevensegment INTERFACE)

target_sources(pac-sevensegment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sevenSegment/src/Segment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sevenSegment/src/7seg_matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/sevenSegment/src/14seg_matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/sevenSegment/src/Segment.h"
  "${CMAKE_CURRENT_LIST_DIR}/sevenSegment/src/16seg_matrix.h"
)

target_include_directories(pac-sevensegment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sevenSegment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevensegment INTERFACE
    arduino-compat
)
