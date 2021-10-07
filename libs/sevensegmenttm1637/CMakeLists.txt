add_library(pac-sevensegmenttm1637 INTERFACE)

target_sources(pac-sevensegmenttm1637 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentAsciiMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentTM1637.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentExtended.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentFun.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentExtended.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentAsciiMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentFun.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src/SevenSegmentTM1637.h"
)

target_include_directories(pac-sevensegmenttm1637 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tm1637/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevensegmenttm1637 INTERFACE
    arduino-compat
)
