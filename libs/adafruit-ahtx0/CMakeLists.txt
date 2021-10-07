add_library(pac-adafruit-ahtx0 INTERFACE)

target_sources(pac-adafruit-ahtx0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHTX0/Adafruit_AHTX0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHTX0/Adafruit_AHTX0.h"
)

target_include_directories(pac-adafruit-ahtx0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AHTX0"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-ahtx0 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
