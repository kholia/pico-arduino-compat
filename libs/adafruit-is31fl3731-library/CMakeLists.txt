add_library(pac-adafruit-is31fl3731-library INTERFACE)

target_sources(pac-adafruit-is31fl3731-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_IS31FL3731/Adafruit_IS31FL3731.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_IS31FL3731/Adafruit_IS31FL3731.h"
)

target_include_directories(pac-adafruit-is31fl3731-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_IS31FL3731"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-is31fl3731-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
    pac-adafruit-busio
)
