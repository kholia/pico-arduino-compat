add_library(adafruit-lis3dh INTERFACE)

target_sources(adafruit-lis3dh INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3DH/Adafruit_LIS3DH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3DH/Adafruit_LIS3DH.h"
)

target_include_directories(adafruit-lis3dh INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS3DH"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lis3dh INTERFACE
    arduino-compat
    adafruit-busio
)
