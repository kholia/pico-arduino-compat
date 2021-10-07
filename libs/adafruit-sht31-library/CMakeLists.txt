add_library(pac-adafruit-sht31-library INTERFACE)

target_sources(pac-adafruit-sht31-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT31/Adafruit_SHT31.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT31/Adafruit_SHT31.h"
)

target_include_directories(pac-adafruit-sht31-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT31"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-sht31-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
