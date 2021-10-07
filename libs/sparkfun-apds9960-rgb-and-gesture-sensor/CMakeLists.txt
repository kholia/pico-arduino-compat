add_library(pac-sparkfun-apds9960-rgb-and-gesture-sensor INTERFACE)

target_sources(pac-sparkfun-apds9960-rgb-and-gesture-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_APDS-9960_Sensor_Arduino_Library/src/SparkFun_APDS9960.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_APDS-9960_Sensor_Arduino_Library/src/SparkFun_APDS9960.h"
)

target_include_directories(pac-sparkfun-apds9960-rgb-and-gesture-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_APDS-9960_Sensor_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-apds9960-rgb-and-gesture-sensor INTERFACE
    arduino-compat
)
