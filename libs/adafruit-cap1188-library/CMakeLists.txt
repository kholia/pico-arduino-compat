add_library(pac-adafruit-cap1188-library INTERFACE)

target_sources(pac-adafruit-cap1188-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CAP1188_Library/Adafruit_CAP1188.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CAP1188_Library/Adafruit_CAP1188.h"
)

target_include_directories(pac-adafruit-cap1188-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CAP1188_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-cap1188-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
