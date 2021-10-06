add_library(troyka-imu INTERFACE)

target_sources(troyka-imu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Barometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/MadgwickAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Gyroscope.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/BaseIMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Accelerometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/GOST4401_81.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Compass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/BaseIMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Gyroscope.h"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/MadgwickAHRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Barometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/TroykaIMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Accelerometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/GOST4401_81.h"
  "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src/Compass.h"
)

target_include_directories(troyka-imu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Troyka-IMU/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(troyka-imu INTERFACE
    arduino-compat
)
