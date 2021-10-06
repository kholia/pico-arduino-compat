add_library(sparkfun-ads1015-arduino-library INTERFACE)

target_sources(sparkfun-ads1015-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADS1015_Arduino_Library/src/SparkFun_ADS1015_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADS1015_Arduino_Library/src/SparkFun_ADS1015_Arduino_Library.h"
)

target_include_directories(sparkfun-ads1015-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ADS1015_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-ads1015-arduino-library INTERFACE
    arduino-compat
)
