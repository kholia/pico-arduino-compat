add_library(sparkfun-u-blox-arduino-library INTERFACE)

target_sources(sparkfun-u-blox-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/src/SparkFun_Ublox_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/Series_6_7/Example1_GetPositionAndTime_Series_6_7/SparkFun_Ublox_Arduino_Library_Series_6_7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/Zephyr/Example1_GetPositionAndTime_Zephyr/src/SparkFun_Ublox_Zephyr_Interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/Zephyr/Example1_GetPositionAndTime_Zephyr/src/SparkFun_Ublox_Zephyr_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/Zephyr/Example1_GetPositionAndTime_Zephyr/src/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/src/SparkFun_Ublox_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/src/u-blox_config_keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/ZED-F9P/Example14_NTRIPServer/secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/Series_6_7/Example1_GetPositionAndTime_Series_6_7/SparkFun_Ublox_Arduino_Library_Series_6_7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/Zephyr/Example1_GetPositionAndTime_Zephyr/src/SparkFun_Ublox_Zephyr_Interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/examples/Zephyr/Example1_GetPositionAndTime_Zephyr/src/SparkFun_Ublox_Zephyr_Library.h"
)

target_include_directories(sparkfun-u-blox-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Ublox_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-u-blox-arduino-library INTERFACE
    arduino-compat
)
