add_library(pac-radar INTERFACE)

target_sources(pac-radar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RADAR/radar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RADAR/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RADAR/radar.h"
)

target_include_directories(pac-radar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RADAR"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-radar INTERFACE
    arduino-compat
)
