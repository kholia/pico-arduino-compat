add_library(pac-adafruit-tmp007-library INTERFACE)

target_sources(pac-adafruit-tmp007-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP007_Library/Adafruit_TMP007.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP007_Library/Adafruit_TMP007.h"
)

target_include_directories(pac-adafruit-tmp007-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP007_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-tmp007-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
