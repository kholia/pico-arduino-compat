add_library(pac-sparkfun-max1704x-fuel-gauge-arduino-library INTERFACE)

target_sources(pac-sparkfun-max1704x-fuel-gauge-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX1704x_Fuel_Gauge_Arduino_Library/src/SparkFun_MAX1704x_Fuel_Gauge_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX1704x_Fuel_Gauge_Arduino_Library/src/SparkFun_MAX1704x_Fuel_Gauge_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-max1704x-fuel-gauge-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX1704x_Fuel_Gauge_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-max1704x-fuel-gauge-arduino-library INTERFACE
    arduino-compat
)
