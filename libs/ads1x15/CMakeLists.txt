add_library(pac-ads1x15 INTERFACE)

target_sources(pac-ads1x15 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADS1X15/ADS1X15.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1X15/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1X15/ADS1X15.h"
)

target_include_directories(pac-ads1x15 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADS1X15"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ads1x15 INTERFACE
    arduino-compat
)
