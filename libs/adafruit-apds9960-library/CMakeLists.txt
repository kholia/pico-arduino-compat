add_library(pac-adafruit-apds9960-library INTERFACE)

target_sources(pac-adafruit-apds9960-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_APDS9960/Adafruit_APDS9960.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_APDS9960/Adafruit_APDS9960.h"
)

target_include_directories(pac-adafruit-apds9960-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_APDS9960"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-apds9960-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
