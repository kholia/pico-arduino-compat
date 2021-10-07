add_library(pac-adafruit-graphic-vfd-display-library INTERFACE)

target_sources(pac-adafruit-graphic-vfd-display-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Graphic-VFD-Display-Library/Adafruit_GP9002.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Graphic-VFD-Display-Library/examples/GraphicVFDtest/adabmp.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Graphic-VFD-Display-Library/Adafruit_GP9002.h"
)

target_include_directories(pac-adafruit-graphic-vfd-display-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Graphic-VFD-Display-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-graphic-vfd-display-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
