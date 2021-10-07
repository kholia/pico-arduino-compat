add_library(pac-adafruit-freetouch-library INTERFACE)

target_sources(pac-adafruit-freetouch-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FreeTouch/Adafruit_FreeTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FreeTouch/adafruit_ptc.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FreeTouch/samd21_ptc_component.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FreeTouch/Adafruit_FreeTouch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FreeTouch/adafruit_ptc.h"
)

target_include_directories(pac-adafruit-freetouch-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FreeTouch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-freetouch-library INTERFACE
    arduino-compat
)
