add_library(pac-sparkfun-si7021-humidity-and-temperature-sensor INTERFACE)

target_sources(pac-sparkfun-si7021-humidity-and-temperature-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Si701_Breakout_Arduino_Library/src/SparkFun_Si7021_Breakout_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Si701_Breakout_Arduino_Library/src/SparkFun_Si7021_Breakout_Library.h"
)

target_include_directories(pac-sparkfun-si7021-humidity-and-temperature-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Si701_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-si7021-humidity-and-temperature-sensor INTERFACE
    arduino-compat
)
