add_library(adafruit-dps310 INTERFACE)

target_sources(adafruit-dps310 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DPS310/Adafruit_DPS310.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DPS310/Adafruit_DPS310.h"
)

target_include_directories(adafruit-dps310 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DPS310"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-dps310 INTERFACE
    arduino-compat
    adafruit-busio
)
