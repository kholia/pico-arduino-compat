add_library(pac-sparkfun-veml6075-arduino-library INTERFACE)

target_sources(pac-sparkfun-veml6075-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VEML6075_Arduino_Library/src/SparkFun_VEML6075_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VEML6075_Arduino_Library/src/SparkFun_VEML6075_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-veml6075-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VEML6075_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-veml6075-arduino-library INTERFACE
    arduino-compat
)
