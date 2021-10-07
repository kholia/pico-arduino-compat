add_library(pac-accelerometer-and-gyroscope-lsm6ds3 INTERFACE)

target_sources(pac-accelerometer-and-gyroscope-lsm6ds3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_And_Gyroscope_LSM6DS3/SparkFunLSM6DS3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_And_Gyroscope_LSM6DS3/SparkFunLSM6DS3.h"
)

target_include_directories(pac-accelerometer-and-gyroscope-lsm6ds3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Accelerometer_And_Gyroscope_LSM6DS3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-accelerometer-and-gyroscope-lsm6ds3 INTERFACE
    arduino-compat
)
