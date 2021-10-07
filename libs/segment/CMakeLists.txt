add_library(pac-segment INTERFACE)

target_sources(pac-segment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Segment/src/Segment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Segment/src/7seg_matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/Segment/src/14seg_matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/Segment/src/Segment.h"
  "${CMAKE_CURRENT_LIST_DIR}/Segment/src/16seg_matrix.h"
)

target_include_directories(pac-segment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Segment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-segment INTERFACE
    arduino-compat
)
