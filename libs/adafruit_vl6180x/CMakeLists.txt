add_library(adafruit_vl6180x INTERFACE)

target_sources(adafruit_vl6180x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL6180X/Adafruit_VL6180X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL6180X/Adafruit_VL6180X.h"
)

target_include_directories(adafruit_vl6180x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL6180X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit_vl6180x INTERFACE
    arduino-compat
    adafruit-busio
)
