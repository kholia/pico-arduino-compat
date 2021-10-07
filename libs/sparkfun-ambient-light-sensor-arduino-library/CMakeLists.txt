add_library(pac-sparkfun-ambient-light-sensor-arduino-library INTERFACE)

target_sources(pac-sparkfun-ambient-light-sensor-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ambient_Light_Sensor_Arduino_Library/src/SparkFun_VEML6030_Ambient_Light_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ambient_Light_Sensor_Arduino_Library/src/SparkFun_VEML6030_Ambient_Light_Sensor.h"
)

target_include_directories(pac-sparkfun-ambient-light-sensor-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ambient_Light_Sensor_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-ambient-light-sensor-arduino-library INTERFACE
    arduino-compat
)
