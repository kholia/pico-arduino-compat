add_library(pac-acesegmentwriter INTERFACE)

target_sources(pac-acesegmentwriter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/CharWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/NumberWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/AceSegmentWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/StringScroller.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/CharWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/PatternWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/LevelWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/StringWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/NumberWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/ClockWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src/ace_segment_writer/TemperatureWriter.h"
)

target_include_directories(pac-acesegmentwriter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceSegmentWriter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acesegmentwriter INTERFACE
    arduino-compat
)
