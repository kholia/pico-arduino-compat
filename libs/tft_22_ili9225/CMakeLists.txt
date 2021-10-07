add_library(pac-tft_22_ili9225 INTERFACE)

target_sources(pac-tft_22_ili9225 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/src/TFT_22_ILI9225.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/src/DefaultFonts.c"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/Picopixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSans24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSans9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/LiberationSans_Bold10pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerif24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/BebasNeue_Bold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMono9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/BebasNeue_Bold23pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBoldItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMono24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/Org_01.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBoldItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMono12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSans18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/BebasNeue_Bold10pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/BebasNeue_Bold16pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerif9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerif18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSans12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBold11pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/TomThumb.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerif12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMonoBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBoldItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeMono18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSansBold10pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/Logisoso10pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/fonts/FreeSerifBoldItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/src/gfxfont.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/src/TFT_22_ILI9225.h"
)

target_include_directories(pac-tft_22_ili9225 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFT_22_ILI9225/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tft_22_ili9225 INTERFACE
    arduino-compat
)
