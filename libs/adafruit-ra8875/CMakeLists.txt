add_library(adafruit-ra8875 INTERFACE)

target_sources(adafruit-ra8875 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_RA8875/Adafruit_RA8875.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_RA8875/Adafruit_RA8875.h"
)

target_include_directories(adafruit-ra8875 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_RA8875"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-ra8875 INTERFACE
    arduino-compat
    adafruit-gfx-library
)
