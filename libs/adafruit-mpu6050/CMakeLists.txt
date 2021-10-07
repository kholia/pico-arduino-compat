add_library(pac-adafruit-mpu6050 INTERFACE)

target_sources(pac-adafruit-mpu6050 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPU6050/Adafruit_MPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPU6050/Adafruit_MPU6050.h"
)

target_include_directories(pac-adafruit-mpu6050 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPU6050"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mpu6050 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
