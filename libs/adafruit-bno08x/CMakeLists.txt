add_library(pac-adafruit-bno08x INTERFACE)

target_sources(pac-adafruit-bno08x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/Adafruit_BNO08x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2_util.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/shtp.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2_SensorValue.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/shtp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2_err.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/Adafruit_BNO08x.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2_util.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src/sh2_SensorValue.h"
)

target_include_directories(pac-adafruit-bno08x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-bno08x INTERFACE
    arduino-compat
    pac-adafruit-busio
)
