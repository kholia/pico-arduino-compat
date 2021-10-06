add_library(sparkfun-hm1x-bluetooth-arduino-library INTERFACE)

target_sources(sparkfun-hm1x-bluetooth-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM1X_Bluetooth_Arduino_Library/src/SparkFun_HM1X_Bluetooth_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM1X_Bluetooth_Arduino_Library/src/SparkFun_HM1X_Bluetooth_Arduino_Library.h"
)

target_include_directories(sparkfun-hm1x-bluetooth-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM1X_Bluetooth_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-hm1x-bluetooth-arduino-library INTERFACE
    arduino-compat
)
