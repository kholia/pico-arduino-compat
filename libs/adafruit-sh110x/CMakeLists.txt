add_library(pac-adafruit-sh110x INTERFACE)

target_sources(pac-adafruit-sh110x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SH110x/Adafruit_SH1106G.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SH110x/Adafruit_SH1107.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SH110x/Adafruit_SH110X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SH110x/Adafruit_SH110X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SH110x/splash.h"
)

target_include_directories(pac-adafruit-sh110x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SH110x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-sh110x INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
