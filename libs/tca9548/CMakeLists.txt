add_library(tca9548 INTERFACE)

target_sources(tca9548 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCA9548/TCA9548.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TCA9548/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TCA9548/TCA9548.h"
)

target_include_directories(tca9548 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCA9548"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tca9548 INTERFACE
    arduino-compat
)
