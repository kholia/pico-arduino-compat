add_library(sparkfun-t5403-barometric-sensor-library INTERFACE)

target_sources(sparkfun-t5403-barometric-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_T5403_Barometric_Sensor_Arduino_Library/src/SparkFunT5403.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_T5403_Barometric_Sensor_Arduino_Library/src/SparkFunT5403.h"
)

target_include_directories(sparkfun-t5403-barometric-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_T5403_Barometric_Sensor_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-t5403-barometric-sensor-library INTERFACE
    arduino-compat
)
