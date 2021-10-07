add_library(pac-tca9555 INTERFACE)

target_sources(pac-tca9555 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCA9555/TCA9555.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TCA9555/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TCA9555/TCA9555.h"
)

target_include_directories(pac-tca9555 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCA9555"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tca9555 INTERFACE
    arduino-compat
)
