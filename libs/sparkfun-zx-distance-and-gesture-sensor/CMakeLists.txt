add_library(pac-sparkfun-zx-distance-and-gesture-sensor INTERFACE)

target_sources(pac-sparkfun-zx-distance-and-gesture-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ZX_Distance_and_Gesture_Sensor_Arduino_Library/src/ZX_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ZX_Distance_and_Gesture_Sensor_Arduino_Library/src/ZX_Sensor.h"
)

target_include_directories(pac-sparkfun-zx-distance-and-gesture-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ZX_Distance_and_Gesture_Sensor_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-zx-distance-and-gesture-sensor INTERFACE
    arduino-compat
)
