add_library(pac-adafruit-sht4x-library INTERFACE)

target_sources(pac-adafruit-sht4x-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT4X/Adafruit_SHT4x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT4X/Adafruit_SHT4x.h"
)

target_include_directories(pac-adafruit-sht4x-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SHT4X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-sht4x-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
