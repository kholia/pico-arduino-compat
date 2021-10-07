add_library(pac-spfd5408-tft-library INTERFACE)

target_sources(pac-spfd5408-tft-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-SPFD5408/src/TftSpfd5408.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-SPFD5408/examples/tftpaint_shield/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-SPFD5408/src/pin_magic.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-SPFD5408/src/TftSpfd5408.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-SPFD5408/src/registers.h"
)

target_include_directories(pac-spfd5408-tft-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFTLCD-SPFD5408/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-spfd5408-tft-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
