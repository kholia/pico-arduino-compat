add_library(arduino-i2c-km1 INTERFACE)

target_sources(arduino-i2c-km1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src/CRC16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src/KM1_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src/TypeUtility.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src/KM1_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src/Definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src/CRC16.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src/TypeUtility.h"
)

target_include_directories(arduino-i2c-km1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-I2C-KM1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-i2c-km1 INTERFACE
    arduino-compat
)
