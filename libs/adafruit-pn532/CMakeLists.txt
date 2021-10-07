add_library(pac-adafruit-pn532 INTERFACE)

target_sources(pac-adafruit-pn532 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PN532/Adafruit_PN532.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PN532/Adafruit_PN532.h"
)

target_include_directories(pac-adafruit-pn532 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PN532"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-pn532 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
