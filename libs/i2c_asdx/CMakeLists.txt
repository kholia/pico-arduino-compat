add_library(pac-i2c_asdx INTERFACE)

target_sources(pac-i2c_asdx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_ASDX/I2C_ASDX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_ASDX/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_ASDX/I2C_ASDX.h"
)

target_include_directories(pac-i2c_asdx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_ASDX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c_asdx INTERFACE
    arduino-compat
)
