add_library(pac-adafruit-hts221 INTERFACE)

target_sources(pac-adafruit-hts221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTS221/Adafruit_HTS221.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTS221/Adafruit_HTS221.h"
)

target_include_directories(pac-adafruit-hts221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTS221"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-hts221 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
