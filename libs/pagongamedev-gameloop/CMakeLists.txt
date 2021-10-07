add_library(pac-pagongamedev-gameloop INTERFACE)

target_sources(pac-pagongamedev-gameloop INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/PagonGameDev_GameLoop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Espert_Adafruit_SSD1306/Espert_Adafruit_SSD1306.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/fontconvert/fontconvert.c"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/PagonGameDev_GameLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/gfxfont.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSans24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSans9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerif24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMono9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBoldItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMono24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBoldItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMono12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSans18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerif9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerif18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSans12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/TomThumb.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerif12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMonoBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSansOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBoldItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeMono18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Adafruit-GFX-Library/Fonts/FreeSerifBoldItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop/examples/WS001_SnakeGame/Library_For_WS001/Espert_Adafruit_SSD1306/Espert_Adafruit_SSD1306.h"
)

target_include_directories(pac-pagongamedev-gameloop INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PagonGameDev_GameLoop"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-pagongamedev-gameloop INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
