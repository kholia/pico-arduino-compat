add_library(adafruit-ds1841 INTERFACE)

target_sources(adafruit-ds1841 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS1841/Adafruit_DS1841.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS1841/Adafruit_DS1841.h"
)

target_include_directories(adafruit-ds1841 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS1841"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-ds1841 INTERFACE
    arduino-compat
    adafruit-busio
)
