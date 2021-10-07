add_library(pac-adafruit-fxos8700 INTERFACE)

target_sources(pac-adafruit-fxos8700 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FXOS8700/Adafruit_FXOS8700.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FXOS8700/Adafruit_FXOS8700.h"
)

target_include_directories(pac-adafruit-fxos8700 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FXOS8700"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-fxos8700 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
