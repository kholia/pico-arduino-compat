add_library(pac-adafruit-ms8607 INTERFACE)

target_sources(pac-adafruit-ms8607 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MS8607/Adafruit_MS8607.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MS8607/Adafruit_MS8607.h"
)

target_include_directories(pac-adafruit-ms8607 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MS8607"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-ms8607 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
