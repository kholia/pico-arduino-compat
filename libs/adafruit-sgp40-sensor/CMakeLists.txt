add_library(adafruit-sgp40-sensor INTERFACE)

target_sources(adafruit-sgp40-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/Adafruit_SGP40.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/sensirion_voc_algorithm.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/sensirion_arch_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/Adafruit_SGP40.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src/sensirion_voc_algorithm.h"
)

target_include_directories(adafruit-sgp40-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP40/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-sgp40-sensor INTERFACE
    arduino-compat
    adafruit-busio
)
