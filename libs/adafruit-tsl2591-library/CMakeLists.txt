add_library(adafruit-tsl2591-library INTERFACE)

target_sources(adafruit-tsl2591-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TSL2591_Library/Adafruit_TSL2591.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TSL2591_Library/Adafruit_TSL2591.h"
)

target_include_directories(adafruit-tsl2591-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TSL2591_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-tsl2591-library INTERFACE
    arduino-compat
    adafruit-busio
)
