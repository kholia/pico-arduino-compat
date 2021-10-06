add_library(sparkfun-mpl3115a2-altitude-and-pressure-sensor-breakout INTERFACE)

target_sources(sparkfun-mpl3115a2-altitude-and-pressure-sensor-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPL3115A2_Breakout_Arduino_Library/src/SparkFunMPL3115A2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPL3115A2_Breakout_Arduino_Library/src/SparkFunMPL3115A2.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPL3115A2_Breakout_Arduino_Library/examples/SparkFunMPL3115A2AdvancedExample/defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPL3115A2_Breakout_Arduino_Library/examples/SparkFunMPL3115A2AdvancedExample/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPL3115A2_Breakout_Arduino_Library/examples/SparkFunMPL3115A2AdvancedExample/i2c.h"
)

target_include_directories(sparkfun-mpl3115a2-altitude-and-pressure-sensor-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MPL3115A2_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-mpl3115a2-altitude-and-pressure-sensor-breakout INTERFACE
    arduino-compat
)
