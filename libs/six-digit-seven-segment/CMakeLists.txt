add_library(pac-six-digit-seven-segment INTERFACE)

target_sources(pac-six-digit-seven-segment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/6-digit-7-Segment-Arduino/SegmentDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/6-digit-7-Segment-Arduino/SegmentDisplay.h"
)

target_include_directories(pac-six-digit-seven-segment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/6-digit-7-Segment-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-six-digit-seven-segment INTERFACE
    arduino-compat
)
