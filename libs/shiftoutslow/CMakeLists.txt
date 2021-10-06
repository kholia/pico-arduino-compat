add_library(shiftoutslow INTERFACE)

target_sources(shiftoutslow INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow/ShiftOutSlow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow/ShiftOutSlow.h"
)

target_include_directories(shiftoutslow INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shiftoutslow INTERFACE
    arduino-compat
)
