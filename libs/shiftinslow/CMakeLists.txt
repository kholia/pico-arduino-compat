add_library(shiftinslow INTERFACE)

target_sources(shiftinslow INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow/ShiftInSlow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow/ShiftInSlow.h"
)

target_include_directories(shiftinslow INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftInSlow"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shiftinslow INTERFACE
    arduino-compat
)
