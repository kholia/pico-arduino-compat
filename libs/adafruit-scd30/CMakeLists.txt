add_library(pac-adafruit-scd30 INTERFACE)

target_sources(pac-adafruit-scd30 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SCD30/Adafruit_SCD30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SCD30/Adafruit_SCD30.h"
)

target_include_directories(pac-adafruit-scd30 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SCD30"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-scd30 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
