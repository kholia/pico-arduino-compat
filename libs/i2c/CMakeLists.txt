add_library(pac-i2c INTERFACE)

target_sources(pac-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C/src/I2C_32Bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C/src/I2C_8Bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C/src/I2C_16Bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C/src/I2C_16Bit.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C/src/I2C_8Bit.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C/src/I2C_32Bit.h"
)

target_include_directories(pac-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c INTERFACE
    arduino-compat
)
