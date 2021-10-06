add_library(sparkfun-u-blox-gnss-arduino-library INTERFACE)

target_sources(sparkfun-u-blox-gnss-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_GNSS_Arduino_Library/src/SparkFun_u-blox_GNSS_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_GNSS_Arduino_Library/src/u-blox_config_keys.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_GNSS_Arduino_Library/src/SparkFun_u-blox_GNSS_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_GNSS_Arduino_Library/src/u-blox_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_GNSS_Arduino_Library/examples/ZED-F9P/Example14_NTRIPServer/secrets.h"
)

target_include_directories(sparkfun-u-blox-gnss-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_GNSS_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-u-blox-gnss-arduino-library INTERFACE
    arduino-compat
)
