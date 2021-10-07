add_library(pac-shiftoutslow INTERFACE)

target_sources(pac-shiftoutslow INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow/ShiftOutSlow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow/ShiftOutSlow.h"
)

target_include_directories(pac-shiftoutslow INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftOutSlow"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shiftoutslow INTERFACE
    arduino-compat
)
