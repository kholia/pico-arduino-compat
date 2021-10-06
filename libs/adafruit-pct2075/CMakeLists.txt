add_library(adafruit-pct2075 INTERFACE)

target_sources(adafruit-pct2075 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCT2075/Adafruit_PCT2075.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCT2075/Adafruit_PCT2075.h"
)

target_include_directories(adafruit-pct2075 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PCT2075"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-pct2075 INTERFACE
    arduino-compat
    adafruit-busio
)
