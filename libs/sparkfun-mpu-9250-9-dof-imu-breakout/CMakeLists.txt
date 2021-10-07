add_library(pac-sparkfun-mpu-9250-9-dof-imu-breakout INTERFACE)

target_sources(pac-sparkfun-mpu-9250-9-dof-imu-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPU-9250_Breakout_Arduino_Library/src/quaternionFilters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPU-9250_Breakout_Arduino_Library/src/MPU9250.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPU-9250_Breakout_Arduino_Library/src/quaternionFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPU-9250_Breakout_Arduino_Library/src/MPU9250.h"
)

target_include_directories(pac-sparkfun-mpu-9250-9-dof-imu-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPU-9250_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-mpu-9250-9-dof-imu-breakout INTERFACE
    arduino-compat
)
