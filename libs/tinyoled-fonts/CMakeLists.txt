add_library(pac-tinyoled-fonts INTERFACE)

target_sources(pac-tinyoled-fonts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/Raumsond_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/formplex12_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/PixelOperator.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/PixelOperatorBold.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/font11x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/sloth_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/Blokus_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/homespun_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/Minimum_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/BMplain_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/pzim3x5_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/Minimum+1_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/m38_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/aztech_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/ModernDos.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/5x5_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/acme_5_outlines_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/font16x32digits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/font16x16cn.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/HISKYF21_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/BMSPA_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/bubblesstandard_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/zxpix_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/boxyfont.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/7linedigital_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/font8x16atari.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/renew_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/Commo-Monospaced_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/HUNTER_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/Sansita_Swashed_Regular_57_Digits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/tama_mini02_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/crackers_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/haiku_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/SUPERDIG_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src/ModernDos8.h"
)

target_include_directories(pac-tinyoled-fonts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyOLED-Fonts/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyoled-fonts INTERFACE
    arduino-compat
)
