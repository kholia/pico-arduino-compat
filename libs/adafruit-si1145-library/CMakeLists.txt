add_library(adafruit-si1145-library INTERFACE)

target_sources(adafruit-si1145-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SI1145_Library/Adafruit_SI1145.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SI1145_Library/Adafruit_SI1145.h"
)

target_include_directories(adafruit-si1145-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SI1145_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-si1145-library INTERFACE
    arduino-compat
    adafruit-busio
)
