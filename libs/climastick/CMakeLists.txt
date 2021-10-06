add_library(climastick INTERFACE)

target_sources(climastick INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/TSL2561.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/NTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/MPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/Adafruit_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/HMC5883L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/MPU9250.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/HMC5883L.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/NTPClient.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/Adafruit_BME280.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/Adafruit_Sensor.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/MPU6050.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/TSL2561.h"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/helper_3dmath.h"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/I2Cdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/ClimaStickV1.h"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/Adafruit_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/MPU9250.h"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/ClimaStickV2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src/ClimaStick.h"
)

target_include_directories(climastick INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClimaStick/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(climastick INTERFACE
    arduino-compat
)
