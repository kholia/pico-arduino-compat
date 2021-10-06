add_library(neo7segment INTERFACE)

target_sources(neo7segment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Neo7Segment/src/Neo7Segment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Neo7Segment/src/Neo7Segment.h"
)

target_include_directories(neo7segment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Neo7Segment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neo7segment INTERFACE
    arduino-compat
)
