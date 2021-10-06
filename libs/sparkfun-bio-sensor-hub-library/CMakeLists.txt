add_library(sparkfun-bio-sensor-hub-library INTERFACE)

target_sources(sparkfun-bio-sensor-hub-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Bio_Sensor_Hub_Library/src/SparkFun_Bio_Sensor_Hub_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Bio_Sensor_Hub_Library/src/SparkFun_Bio_Sensor_Hub_Library.h"
)

target_include_directories(sparkfun-bio-sensor-hub-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Bio_Sensor_Hub_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-bio-sensor-hub-library INTERFACE
    arduino-compat
)
