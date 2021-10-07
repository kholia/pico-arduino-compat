add_library(pac-sparkfun-ms5803-14ba-pressure-sensor INTERFACE)

target_sources(pac-sparkfun-ms5803-14ba-pressure-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5803-14BA_Breakout_Arduino_Library/src/SparkFun_MS5803_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5803-14BA_Breakout_Arduino_Library/src/SparkFun_MS5803_I2C.h"
)

target_include_directories(pac-sparkfun-ms5803-14ba-pressure-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5803-14BA_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-ms5803-14ba-pressure-sensor INTERFACE
    arduino-compat
)
