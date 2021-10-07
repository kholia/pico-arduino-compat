add_library(pac-adafruit-lis3dh INTERFACE)

target_sources(pac-adafruit-lis3dh INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3DH/Adafruit_LIS3DH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3DH/Adafruit_LIS3DH.h"
)

target_include_directories(pac-adafruit-lis3dh INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3DH"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-lis3dh INTERFACE
    arduino-compat
    pac-adafruit-busio
)
