add_library(pac-sparkfun-shtc3-humidity-and-temperature-sensor-library INTERFACE)

target_sources(pac-sparkfun-shtc3-humidity-and-temperature-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SHTC3_Arduino_Library/src/SparkFun_SHTC3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SHTC3_Arduino_Library/src/SparkFun_SHTC3.h"
)

target_include_directories(pac-sparkfun-shtc3-humidity-and-temperature-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SHTC3_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-shtc3-humidity-and-temperature-sensor-library INTERFACE
    arduino-compat
)
