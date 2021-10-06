add_library(fastshiftout INTERFACE)

target_sources(fastshiftout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut/FastShiftOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut/FastShiftOut.h"
)

target_include_directories(fastshiftout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastshiftout INTERFACE
    arduino-compat
)
