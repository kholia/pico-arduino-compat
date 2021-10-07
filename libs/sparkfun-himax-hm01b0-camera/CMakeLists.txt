add_library(pac-sparkfun-himax-hm01b0-camera INTERFACE)

target_sources(pac-sparkfun-himax-hm01b0-camera INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/hm01b0_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/platforms/apollo3/src/hm01b0_platform_apollo3 .cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/hm01b0.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/platforms/apollo3/src/hm01b0_platform_apollo3.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/hm01b0.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/hm01b0_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/hm01b0_walking1s_01.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/hm01b0_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/hm01b0_raw8_qvga_8bits_lsb_5fps.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/platforms/arduino_generic/include/hm01b0_platform_arduino_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src/platforms/apollo3/include/hm01b0_platform_apollo3.h"
)

target_include_directories(pac-sparkfun-himax-hm01b0-camera INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_HM01B0_Camera_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-himax-hm01b0-camera INTERFACE
    arduino-compat
)
