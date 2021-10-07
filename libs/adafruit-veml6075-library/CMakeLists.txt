add_library(pac-adafruit-veml6075-library INTERFACE)

target_sources(pac-adafruit-veml6075-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6075/Adafruit_VEML6075.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6075/Adafruit_VEML6075.h"
)

target_include_directories(pac-adafruit-veml6075-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6075"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-veml6075-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
