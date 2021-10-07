add_library(pac-adafruit-ds3502 INTERFACE)

target_sources(pac-adafruit-ds3502 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS3502/Adafruit_DS3502.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS3502/Adafruit_DS3502.h"
)

target_include_directories(pac-adafruit-ds3502 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DS3502"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-ds3502 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
