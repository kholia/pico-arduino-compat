add_library(adafruit-hts221 INTERFACE)

target_sources(adafruit-hts221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTS221/Adafruit_HTS221.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTS221/Adafruit_HTS221.h"
)

target_include_directories(adafruit-hts221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTS221"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-hts221 INTERFACE
    arduino-compat
    adafruit-busio
)
