add_library(cd4511b-seven-segment-display-driver INTERFACE)

target_sources(cd4511b-seven-segment-display-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SegmentDisplay_CD4511B/SegmentDisplay_CD4511B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SegmentDisplay_CD4511B/SegmentDisplay_CD4511B.h"
)

target_include_directories(cd4511b-seven-segment-display-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SegmentDisplay_CD4511B"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cd4511b-seven-segment-display-driver INTERFACE
    arduino-compat
)
