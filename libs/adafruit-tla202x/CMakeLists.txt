add_library(pac-adafruit-tla202x INTERFACE)

target_sources(pac-adafruit-tla202x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLA202x/Adafruit_TLA202x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLA202x/Adafruit_TLA202x.h"
)

target_include_directories(pac-adafruit-tla202x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLA202x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-tla202x INTERFACE
    arduino-compat
    pac-adafruit-busio
)
