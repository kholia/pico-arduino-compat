add_library(pac-i2c-mpu6886-imu INTERFACE)

target_sources(pac-i2c-mpu6886-imu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_MPU6886/src/I2C_MPU6886.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_MPU6886/src/I2C_MPU6886.h"
)

target_include_directories(pac-i2c-mpu6886-imu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_MPU6886/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c-mpu6886-imu INTERFACE
    arduino-compat
)
