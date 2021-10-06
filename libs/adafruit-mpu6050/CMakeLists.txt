add_library(adafruit-mpu6050 INTERFACE)

target_sources(adafruit-mpu6050 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPU6050/Adafruit_MPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPU6050/Adafruit_MPU6050.h"
)

target_include_directories(adafruit-mpu6050 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPU6050"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mpu6050 INTERFACE
    arduino-compat
    adafruit-busio
)
