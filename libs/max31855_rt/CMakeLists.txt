add_library(max31855_rt INTERFACE)

target_sources(max31855_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX31855_RT/MAX31855.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31855_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31855_RT/MAX31855.h"
)

target_include_directories(max31855_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX31855_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max31855_rt INTERFACE
    arduino-compat
)
