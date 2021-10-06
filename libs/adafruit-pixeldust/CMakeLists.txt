add_library(adafruit-pixeldust INTERFACE)

target_sources(adafruit-pixeldust INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/Adafruit_PixelDust.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/raspberry_pi/demo1-snow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/raspberry_pi/demo3-logo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/raspberry_pi/demo2-hourglass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/raspberry_pi/lis3dh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/Adafruit_PixelDust.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/raspberry_pi/logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust/raspberry_pi/lis3dh.h"
)

target_include_directories(adafruit-pixeldust INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PixelDust"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-pixeldust INTERFACE
    arduino-compat
)
