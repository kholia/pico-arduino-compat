add_library(mpu6050 INTERFACE)

target_sources(mpu6050 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/MPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/MPU6050_6Axis_MotionApps_V6_12.h"
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/helper_3dmath.h"
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/MPU6050_9Axis_MotionApps41.h"
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/I2Cdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/MPU6050_6Axis_MotionApps20.h"
  "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src/MPU6050.h"
)

target_include_directories(mpu6050 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mpu6050/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mpu6050 INTERFACE
    arduino-compat
)
