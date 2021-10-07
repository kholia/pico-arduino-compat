add_library(pac-adafruit-lps2x INTERFACE)

target_sources(pac-adafruit-lps2x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS25.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS2X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS22.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS2X.h"
)

target_include_directories(pac-adafruit-lps2x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-lps2x INTERFACE
    arduino-compat
    pac-adafruit-busio
)
