add_library(sparkfun-garmin-lidar-lite-v4-arduino-library INTERFACE)

target_sources(sparkfun-garmin-lidar-lite-v4-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIDARLitev4_Arduino_Library/src/LIDARLite_v4LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIDARLitev4_Arduino_Library/src/LIDARLite_v4LED.h"
)

target_include_directories(sparkfun-garmin-lidar-lite-v4-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LIDARLitev4_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-garmin-lidar-lite-v4-arduino-library INTERFACE
    arduino-compat
)
