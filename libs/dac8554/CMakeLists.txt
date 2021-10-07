add_library(pac-dac8554 INTERFACE)

target_sources(pac-dac8554 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC8554/DAC8554.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8554/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8554/DAC8554.h"
)

target_include_directories(pac-dac8554 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC8554"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dac8554 INTERFACE
    arduino-compat
)
