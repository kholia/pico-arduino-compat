add_library(adafruit-drv2605-library INTERFACE)

target_sources(adafruit-drv2605-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DRV2605_Library/Adafruit_DRV2605.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DRV2605_Library/Adafruit_DRV2605.h"
)

target_include_directories(adafruit-drv2605-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DRV2605_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-drv2605-library INTERFACE
    arduino-compat
    adafruit-busio
)
