add_library(grove-imu-9dof INTERFACE)

target_sources(grove-imu-9dof INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF/MPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF/I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF/helper_3dmath.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF/MPU6050_9Axis_MotionApps41.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF/I2Cdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF/MPU6050_6Axis_MotionApps20.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF/MPU6050.h"
)

target_include_directories(grove-imu-9dof INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_IMU_9DOF"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-imu-9dof INTERFACE
    arduino-compat
)
