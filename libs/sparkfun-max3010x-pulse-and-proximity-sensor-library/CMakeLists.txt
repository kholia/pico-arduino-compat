add_library(pac-sparkfun-max3010x-pulse-and-proximity-sensor-library INTERFACE)

target_sources(pac-sparkfun-max3010x-pulse-and-proximity-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX3010x_Sensor_Library/src/spo2_algorithm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX3010x_Sensor_Library/src/MAX30105.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX3010x_Sensor_Library/src/heartRate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX3010x_Sensor_Library/src/MAX30105.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX3010x_Sensor_Library/src/heartRate.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX3010x_Sensor_Library/src/spo2_algorithm.h"
)

target_include_directories(pac-sparkfun-max3010x-pulse-and-proximity-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX3010x_Sensor_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-max3010x-pulse-and-proximity-sensor-library INTERFACE
    arduino-compat
)
