add_library(pac-sparkfun-adxl345-arduino-library INTERFACE)

target_sources(pac-sparkfun-adxl345-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADXL345_Arduino_Library/src/SparkFun_ADXL345.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADXL345_Arduino_Library/src/SparkFun_ADXL345.h"
)

target_include_directories(pac-sparkfun-adxl345-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADXL345_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-adxl345-arduino-library INTERFACE
    arduino-compat
)
