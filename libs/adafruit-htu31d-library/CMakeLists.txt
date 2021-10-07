add_library(pac-adafruit-htu31d-library INTERFACE)

target_sources(pac-adafruit-htu31d-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU31D/Adafruit_HTU31D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU31D/Adafruit_HTU31D.h"
)

target_include_directories(pac-adafruit-htu31d-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HTU31D"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-htu31d-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
