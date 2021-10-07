add_library(pac-i2c_24lc1025 INTERFACE)

target_sources(pac-i2c_24lc1025 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_24LC1025/I2C_24LC1025.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_24LC1025/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_24LC1025/I2C_24LC1025.h"
)

target_include_directories(pac-i2c_24lc1025 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_24LC1025"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c_24lc1025 INTERFACE
    arduino-compat
)
