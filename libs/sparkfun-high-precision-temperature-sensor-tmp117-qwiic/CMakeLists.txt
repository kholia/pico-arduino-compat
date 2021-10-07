add_library(pac-sparkfun-high-precision-temperature-sensor-tmp117-qwiic INTERFACE)

target_sources(pac-sparkfun-high-precision-temperature-sensor-tmp117-qwiic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMP117_Arduino_Library/src/SparkFun_TMP117.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMP117_Arduino_Library/src/SparkFun_TMP117_Registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMP117_Arduino_Library/src/SparkFun_TMP117.h"
)

target_include_directories(pac-sparkfun-high-precision-temperature-sensor-tmp117-qwiic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMP117_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-high-precision-temperature-sensor-tmp117-qwiic INTERFACE
    arduino-compat
)
