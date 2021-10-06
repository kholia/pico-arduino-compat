add_library(i2c-mpu6886-imu INTERFACE)

target_sources(i2c-mpu6886-imu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_MPU6886/src/I2C_MPU6886.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_MPU6886/src/I2C_MPU6886.h"
)

target_include_directories(i2c-mpu6886-imu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_MPU6886/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c-mpu6886-imu INTERFACE
    arduino-compat
)
