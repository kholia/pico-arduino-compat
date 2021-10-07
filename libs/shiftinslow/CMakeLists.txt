add_library(pac-shiftinslow INTERFACE)

target_sources(pac-shiftinslow INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow/ShiftInSlow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow/ShiftInSlow.h"
)

target_include_directories(pac-shiftinslow INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shiftinslow INTERFACE
    arduino-compat
)
