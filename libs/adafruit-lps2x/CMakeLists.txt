add_library(adafruit-lps2x INTERFACE)

target_sources(adafruit-lps2x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS25.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS2X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS22.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X/Adafruit_LPS2X.h"
)

target_include_directories(adafruit-lps2x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LPS2X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-lps2x INTERFACE
    arduino-compat
    adafruit-busio
)
