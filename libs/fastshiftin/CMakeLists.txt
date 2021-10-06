add_library(fastshiftin INTERFACE)

target_sources(fastshiftin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn/FastShiftIn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn/FastShiftIn.h"
)

target_include_directories(fastshiftin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastshiftin INTERFACE
    arduino-compat
)
