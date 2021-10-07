add_library(pac-adafruit-lc709203f INTERFACE)

target_sources(pac-adafruit-lc709203f INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LC709203F/Adafruit_LC709203F.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LC709203F/Adafruit_LC709203F.h"
)

target_include_directories(pac-adafruit-lc709203f INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LC709203F"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-lc709203f INTERFACE
    arduino-compat
    pac-adafruit-busio
)
