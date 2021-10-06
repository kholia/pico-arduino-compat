add_library(sparkfun-9dof-imu-breakout-icm-20948-arduino-library INTERFACE)

target_sources(sparkfun-9dof-imu-breakout-icm-20948-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/ICM_20948.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/ICM_20948_C.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/ICM_20948.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/ICM_20948_ENUMERATIONS.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/AK09916_REGISTERS.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/icm20948_img.dmp3a.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/ICM_20948_C.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/AK09916_ENUMERATIONS.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/ICM_20948_DMP.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src/util/ICM_20948_REGISTERS.h"
)

target_include_directories(sparkfun-9dof-imu-breakout-icm-20948-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ICM-20948_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-9dof-imu-breakout-icm-20948-arduino-library INTERFACE
    arduino-compat
)
