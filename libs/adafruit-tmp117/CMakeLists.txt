add_library(pac-adafruit-tmp117 INTERFACE)

target_sources(pac-adafruit-tmp117 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP117/Adafruit_TMP117.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP117/Adafruit_TMP117.h"
)

target_include_directories(pac-adafruit-tmp117 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TMP117"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-tmp117 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
