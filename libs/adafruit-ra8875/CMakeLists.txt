add_library(pac-adafruit-ra8875 INTERFACE)

target_sources(pac-adafruit-ra8875 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_RA8875/Adafruit_RA8875.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_RA8875/Adafruit_RA8875.h"
)

target_include_directories(pac-adafruit-ra8875 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_RA8875"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-ra8875 INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
