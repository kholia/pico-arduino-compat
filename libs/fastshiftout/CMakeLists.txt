add_library(pac-fastshiftout INTERFACE)

target_sources(pac-fastshiftout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut/FastShiftOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut/FastShiftOut.h"
)

target_include_directories(pac-fastshiftout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastShiftOut"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastshiftout INTERFACE
    arduino-compat
)
