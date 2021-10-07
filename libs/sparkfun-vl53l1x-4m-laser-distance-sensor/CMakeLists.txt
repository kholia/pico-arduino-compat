add_library(pac-sparkfun-vl53l1x-4m-laser-distance-sensor INTERFACE)

target_sources(pac-sparkfun-vl53l1x-4m-laser-distance-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src/SparkFun_VL53L1X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src/vl53l1x_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src/RangeSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src/vl53l1x_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src/ComponentObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src/vl53l1_error_codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src/SparkFun_VL53L1X.h"
)

target_include_directories(pac-sparkfun-vl53l1x-4m-laser-distance-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VL53L1X_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-vl53l1x-4m-laser-distance-sensor INTERFACE
    arduino-compat
)
