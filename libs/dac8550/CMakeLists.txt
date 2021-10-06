add_library(dac8550 INTERFACE)

target_sources(dac8550 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC8550/DAC8550.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8550/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8550/DAC8550.h"
)

target_include_directories(dac8550 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC8550"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dac8550 INTERFACE
    arduino-compat
)
