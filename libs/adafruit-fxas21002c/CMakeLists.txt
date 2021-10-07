add_library(pac-adafruit-fxas21002c INTERFACE)

target_sources(pac-adafruit-fxas21002c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FXAS21002C/Adafruit_FXAS21002C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FXAS21002C/Adafruit_FXAS21002C.h"
)

target_include_directories(pac-adafruit-fxas21002c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FXAS21002C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-fxas21002c INTERFACE
    arduino-compat
    pac-adafruit-busio
)
