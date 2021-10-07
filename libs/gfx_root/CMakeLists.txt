add_library(pac-gfx_root INTERFACE)

target_sources(pac-gfx_root INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/GFX_Root.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/GFX_Root.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/gfxfont.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/Picopixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSans24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSans9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerif24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMono9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBoldItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMono24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/Org_01.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBoldItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMono12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSans18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerif9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerif18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSans12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/TomThumb.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/Tiny3x3a2pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerif12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMonoBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSansOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBoldItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeMono18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src/Fonts/FreeSerifBoldItalic12pt7b.h"
)

target_include_directories(pac-gfx_root INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GFX_Root/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gfx_root INTERFACE
    arduino-compat
)
