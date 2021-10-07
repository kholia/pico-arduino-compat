add_library(pac-adafruit-aht10 INTERFACE)

target_sources(pac-adafruit-aht10 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHT10/Adafruit_AHTX0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHT10/Adafruit_AHTX0.h"
)

target_include_directories(pac-adafruit-aht10 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHT10"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-aht10 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
