add_library(pac-espectro32 INTERFACE)

target_sources(pac-espectro32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Network/WiFiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit_IS31FL3731/Adafruit_IS31FL3731.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/AppSetting.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/PWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/GPIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/JSON.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/Animator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/GeneralUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/FreeRTOS-Wrapper/Task.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/FreeRTOS-Wrapper/FreeRTOS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/WS281x/WS2812.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_LedMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_RGBLED_Animation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_LedMatrix_Animation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_Board.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_RGBLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/examples-idf/ex_wifi_conn_anim.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/examples-idf/ex_button.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/examples-idf/ex_adc.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/examples-idf/ex_leds_anim.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/examples-idf/ex_ledmatrix_anim.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/examples-idf/ex_led_pot.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/examples-idf/ex_sdcard.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/fontconvert/fontconvert.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Network/WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit_IS31FL3731/Adafruit_IS31FL3731.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/PWM.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/GeneralUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/Animator.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/AppSetting.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Commons/GPIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/FreeRTOS-Wrapper/FreeRTOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/FreeRTOS-Wrapper/Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/WS281x/WS2812.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/WS281x/RgbLedColor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/gfxfont.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/Picopixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSans24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSans9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerif24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMono9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBoldItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMono24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/Org_01.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBold12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBoldOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBoldItalic18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMono12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBoldOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBold18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSans18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerif9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerif18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansOblique18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSans12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifItalic9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/TomThumb.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerif12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansOblique12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBoldOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBoldOblique24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMonoBold24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSansOblique9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBoldItalic24pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeMono18pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBold9pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/lib/Adafruit-GFX/Fonts/FreeSerifBoldItalic12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_RGBLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_Board.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_LedMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_LedMatrix_Animation.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src/ESPectro32_RGBLED_Animation.h"
)

target_include_directories(pac-espectro32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPectro32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-espectro32 INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
    pac-sd
)
