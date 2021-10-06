add_library(sparkfun-lsm9ds1-imu INTERFACE)

target_sources(sparkfun-lsm9ds1-imu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS1_Arduino_Library/src/SparkFunLSM9DS1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS1_Arduino_Library/src/LSM9DS1_Registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS1_Arduino_Library/src/LSM9DS1_Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS1_Arduino_Library/src/SparkFunLSM9DS1.h"
)

target_include_directories(sparkfun-lsm9ds1-imu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LSM9DS1_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-lsm9ds1-imu INTERFACE
    arduino-compat
)
