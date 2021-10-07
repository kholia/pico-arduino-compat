add_library(pac-adafruit-htu21df-library INTERFACE)

target_sources(pac-adafruit-htu21df-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU21DF_Library/Adafruit_HTU21DF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU21DF_Library/Adafruit_HTU21DF.h"
)

target_include_directories(pac-adafruit-htu21df-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU21DF_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-htu21df-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
