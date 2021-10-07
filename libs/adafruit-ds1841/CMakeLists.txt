add_library(pac-adafruit-ds1841 INTERFACE)

target_sources(pac-adafruit-ds1841 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS1841/Adafruit_DS1841.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS1841/Adafruit_DS1841.h"
)

target_include_directories(pac-adafruit-ds1841 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS1841"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-ds1841 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
