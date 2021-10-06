add_library(dac8551 INTERFACE)

target_sources(dac8551 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC8551/DAC8551.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8551/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8551/DAC8551.h"
)

target_include_directories(dac8551 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC8551"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dac8551 INTERFACE
    arduino-compat
)
