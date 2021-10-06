add_library(mcufriend_kbv INTERFACE)

target_sources(mcufriend_kbv INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/MCUFRIEND_kbv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/ADA_GFX_kbv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/OPENSMART_kbv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/examples/graphictest_slim/graphictest_v25.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/examples/TouchScreen_Calibr_native/TouchScreen_kbv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/graphictest_opensmart/icons.c"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/examples/graphictest_slim/icons.c"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/examples/graphictest_kbv/icons.c"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/UTFTGLUE.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/FreeSevenSegNumFontPlusPlus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/TFT_PRINTGLUE.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/FreeDefaultFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/MCUFRIEND_kbv.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/mcufriend_special_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/ili9481_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/mcufriend_special_3.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/OPENSMART_kbv.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/TFT_HX8357GLUE.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/mcufriend_special_4.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/r61526_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/ili9486_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/ili9341_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/extras/unused/ADA_GFX_kbv.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/examples/drawBitmap_kbv/bitmap_mono.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/examples/drawBitmap_kbv/bitmap_RGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/examples/TouchScreen_Calibr_native/TouchScreen_kbv.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/utility/mcufriend_keil.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/utility/mcufriend_shield.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/utility/pin_shield_8.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/utility/mcufriend_mbed.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/utility/mcufriend_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/utility/mcufriend_special.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv/utility/pin_shield_1.h"
)

target_include_directories(mcufriend_kbv INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCUFRIEND_kbv"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(mcufriend_kbv INTERFACE
    arduino-compat
    adafruit-gfx-library
)
