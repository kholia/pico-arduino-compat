add_library(pac-gem INTERFACE)

target_sources(pac-gem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEMItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEM_adafruit_gfx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEMPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEMSelect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEM_u8g2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEM_adafruit_gfx.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEMSelect.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEM_u8g2.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEMItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/GEMPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/fonts/Fixed6x12.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/fonts/TomThumbMono.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/config/enable-adafruit-gfx.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/config/enable-glcd.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/config/support-float-edit.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/src/config/enable-u8g2.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/examples/AltSerialGraphicLCD/Example-03_Party-Hard/frames.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/examples/U8g2/Example-03_Party-Hard/frames.h"
  "${CMAKE_CURRENT_LIST_DIR}/GEM/examples/AdafruitGFX/Example-03_Party-Hard/frames.h"
)

target_include_directories(pac-gem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GEM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-gem INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
