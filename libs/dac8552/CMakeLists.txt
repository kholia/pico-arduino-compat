add_library(dac8552 INTERFACE)

target_sources(dac8552 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC8552/DAC8552.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8552/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC8552/DAC8552.h"
)

target_include_directories(dac8552 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC8552"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dac8552 INTERFACE
    arduino-compat
)
