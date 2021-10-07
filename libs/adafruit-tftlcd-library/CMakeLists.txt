add_library(pac-adafruit-tftlcd-library INTERFACE)

target_sources(pac-adafruit-tftlcd-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-Library/Adafruit_TFTLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-Library/examples/tftpaint_shield/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-Library/pin_magic.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-Library/Adafruit_TFTLCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-Library/registers.h"
)

target_include_directories(pac-adafruit-tftlcd-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-tftlcd-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
