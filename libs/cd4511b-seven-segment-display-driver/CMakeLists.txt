add_library(pac-cd4511b-seven-segment-display-driver INTERFACE)

target_sources(pac-cd4511b-seven-segment-display-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SegmentDisplay_CD4511B/SegmentDisplay_CD4511B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SegmentDisplay_CD4511B/SegmentDisplay_CD4511B.h"
)

target_include_directories(pac-cd4511b-seven-segment-display-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SegmentDisplay_CD4511B"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cd4511b-seven-segment-display-driver INTERFACE
    arduino-compat
)
