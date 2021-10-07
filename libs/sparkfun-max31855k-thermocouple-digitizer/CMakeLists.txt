add_library(pac-sparkfun-max31855k-thermocouple-digitizer INTERFACE)

target_sources(pac-sparkfun-max31855k-thermocouple-digitizer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX31855K_Thermocouple_Breakout_Arduino_Library/src/SparkFunMAX31855k.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX31855K_Thermocouple_Breakout_Arduino_Library/src/SparkFunMAX31855k.h"
)

target_include_directories(pac-sparkfun-max31855k-thermocouple-digitizer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MAX31855K_Thermocouple_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-max31855k-thermocouple-digitizer INTERFACE
    arduino-compat
)
