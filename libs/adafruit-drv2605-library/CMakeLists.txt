add_library(pac-adafruit-drv2605-library INTERFACE)

target_sources(pac-adafruit-drv2605-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DRV2605_Library/Adafruit_DRV2605.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DRV2605_Library/Adafruit_DRV2605.h"
)

target_include_directories(pac-adafruit-drv2605-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DRV2605_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-drv2605-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
