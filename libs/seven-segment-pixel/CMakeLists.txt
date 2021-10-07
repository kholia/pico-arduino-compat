add_library(pac-seven-segment-pixel INTERFACE)

target_sources(pac-seven-segment-pixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seven_Segment_Pixel/Seven_Segment_Pixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seven_Segment_Pixel/Seven_Segment_Pixel.h"
)

target_include_directories(pac-seven-segment-pixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seven_Segment_Pixel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seven-segment-pixel INTERFACE
    arduino-compat
)
