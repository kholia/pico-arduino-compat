add_library(pac-adafruit-as7341 INTERFACE)

target_sources(pac-adafruit-as7341 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AS7341/Adafruit_AS7341.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AS7341/Adafruit_AS7341.h"
)

target_include_directories(pac-adafruit-as7341 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AS7341"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-as7341 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
