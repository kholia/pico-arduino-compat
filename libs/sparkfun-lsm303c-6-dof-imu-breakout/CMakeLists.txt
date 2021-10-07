add_library(pac-sparkfun-lsm303c-6-dof-imu-breakout INTERFACE)

target_sources(pac-sparkfun-lsm303c-6-dof-imu-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM303C_6_DOF_IMU_Breakout_Arduino_Library/src/SparkFunLSM303C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM303C_6_DOF_IMU_Breakout_Arduino_Library/src/DebugMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM303C_6_DOF_IMU_Breakout_Arduino_Library/src/SparkFunIMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM303C_6_DOF_IMU_Breakout_Arduino_Library/src/LSM303CTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM303C_6_DOF_IMU_Breakout_Arduino_Library/src/SparkFunLSM303C.h"
)

target_include_directories(pac-sparkfun-lsm303c-6-dof-imu-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM303C_6_DOF_IMU_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-lsm303c-6-dof-imu-breakout INTERFACE
    arduino-compat
)
