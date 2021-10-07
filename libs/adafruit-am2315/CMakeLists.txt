add_library(pac-adafruit-am2315 INTERFACE)

target_sources(pac-adafruit-am2315 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AM2315/Adafruit_AM2315.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AM2315/Adafruit_AM2315.h"
)

target_include_directories(pac-adafruit-am2315 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AM2315"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-am2315 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
