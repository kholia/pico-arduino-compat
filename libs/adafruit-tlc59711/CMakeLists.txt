add_library(adafruit-tlc59711 INTERFACE)

target_sources(adafruit-tlc59711 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC59711/Adafruit_TLC59711.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC59711/Adafruit_TLC59711.h"
)

target_include_directories(adafruit-tlc59711 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TLC59711"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-tlc59711 INTERFACE
    arduino-compat
    adafruit-busio
)
