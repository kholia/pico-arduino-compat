add_library(pac-sparkfun-htu21d-humidity-and-temperature-sensor-breakout INTERFACE)

target_sources(pac-sparkfun-htu21d-humidity-and-temperature-sensor-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HTU21D_Breakout_Arduino_Library/src/SparkFunHTU21D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HTU21D_Breakout_Arduino_Library/src/SparkFunHTU21D.h"
)

target_include_directories(pac-sparkfun-htu21d-humidity-and-temperature-sensor-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HTU21D_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-htu21d-humidity-and-temperature-sensor-breakout INTERFACE
    arduino-compat
)
