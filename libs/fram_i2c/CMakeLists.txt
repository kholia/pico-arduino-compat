add_library(pac-fram_i2c INTERFACE)

target_sources(pac-fram_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FRAM_I2C/FRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FRAM_I2C/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FRAM_I2C/FRAM.h"
)

target_include_directories(pac-fram_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FRAM_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fram_i2c INTERFACE
    arduino-compat
)
