add_library(sparkfun-bme280 INTERFACE)

target_sources(sparkfun-bme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BME280_Arduino_Library/src/SparkFunBME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BME280_Arduino_Library/examples/More_Advanced/LCD_DeltaAltitude/CircularBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BME280_Arduino_Library/examples/Example7_RelativeAltitudeChange/CircularBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BME280_Arduino_Library/src/SparkFunBME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BME280_Arduino_Library/examples/More_Advanced/LCD_DeltaAltitude/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BME280_Arduino_Library/examples/Example7_RelativeAltitudeChange/CircularBuffer.h"
)

target_include_directories(sparkfun-bme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BME280_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-bme280 INTERFACE
    arduino-compat
)
