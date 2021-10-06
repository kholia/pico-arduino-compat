add_library(sparkfun-adxl313-arduino-library INTERFACE)

target_sources(sparkfun-adxl313-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADXL313_Arduino_Library/src/SparkFunADXL313.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADXL313_Arduino_Library/src/ADXL313_Registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADXL313_Arduino_Library/src/SparkFunADXL313.h"
)

target_include_directories(sparkfun-adxl313-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADXL313_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-adxl313-arduino-library INTERFACE
    arduino-compat
)
