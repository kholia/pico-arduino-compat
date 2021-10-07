add_library(pac-adafruit-sgp40-sensor INTERFACE)

target_sources(pac-adafruit-sgp40-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/Adafruit_SGP40.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/sensirion_voc_algorithm.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/sensirion_arch_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/Adafruit_SGP40.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/sensirion_voc_algorithm.h"
)

target_include_directories(pac-adafruit-sgp40-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-sgp40-sensor INTERFACE
    arduino-compat
    pac-adafruit-busio
)
