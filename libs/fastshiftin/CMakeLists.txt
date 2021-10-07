add_library(pac-fastshiftin INTERFACE)

target_sources(pac-fastshiftin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn/FastShiftIn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn/FastShiftIn.h"
)

target_include_directories(pac-fastshiftin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastShiftIn"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastshiftin INTERFACE
    arduino-compat
)
