add_library(adafruit-lis331 INTERFACE)

target_sources(adafruit-lis331 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS331/Adafruit_H3LIS331.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS331/Adafruit_LIS331HH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS331/Adafruit_LIS331.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS331/Adafruit_LIS331.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS331/Adafruit_LIS331HH.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS331/Adafruit_H3LIS331.h"
)

target_include_directories(adafruit-lis331 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LIS331"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lis331 INTERFACE
    arduino-compat
    adafruit-busio
)
