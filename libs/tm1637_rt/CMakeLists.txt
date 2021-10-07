add_library(pac-tm1637_rt INTERFACE)

target_sources(pac-tm1637_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TM1637_RT/TM1637.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637_RT/TM1637.h"
)

target_include_directories(pac-tm1637_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TM1637_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tm1637_rt INTERFACE
    arduino-compat
)
