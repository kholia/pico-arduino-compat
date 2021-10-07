add_library(pac-adafruit-mpr121 INTERFACE)

target_sources(pac-adafruit-mpr121 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPR121_Library/Adafruit_MPR121.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPR121_Library/Adafruit_MPR121.h"
)

target_include_directories(pac-adafruit-mpr121 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MPR121_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mpr121 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
