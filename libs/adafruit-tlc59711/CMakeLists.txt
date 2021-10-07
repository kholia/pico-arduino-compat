add_library(pac-adafruit-tlc59711 INTERFACE)

target_sources(pac-adafruit-tlc59711 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC59711/Adafruit_TLC59711.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC59711/Adafruit_TLC59711.h"
)

target_include_directories(pac-adafruit-tlc59711 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC59711"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-tlc59711 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
