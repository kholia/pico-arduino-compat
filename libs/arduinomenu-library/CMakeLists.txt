add_library(pac-arduinomenu-library INTERFACE)

target_sources(pac-arduinomenu-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/nav.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/items.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/plugin/cancelField.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/plugin/barField.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/serialOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/itemsTemplates.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/jsonFmt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/xmlFmt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/esp8266Out.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/examples/ansiSerial/ansiSerial/boxTable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/items.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/shadows.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/baseMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/nav.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menu.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/plugin/cancelField.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/plugin/barField.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/plugin/SdFatMenu.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/plugin/userMenu.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/plugin/SDMenu.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/jsonFmt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/clickEncoderIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/TFT_eSPIOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/interruptPins.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/stringIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/rotaryEventIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/utouchIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/htmlFmt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/xmlFmt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/PCF8574Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/chainStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/analogAxisIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/PCF8574KeyIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/altKeyIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/serialIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/U8x8Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/adafruitGfxOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/jsFmt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/UCGLibOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/altKeyMapDef.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/urtouchIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/esp8266Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/utftOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/keyMapDef.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/serialOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/encoderIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/OzOledAsciiOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/uartOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/groveRGBLCDOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/SSD1306AsciiOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/softKeyIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/ansiSerialOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/serialIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/liquidCrystalOutI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/U8GLibOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/lcdOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/I2CkeypadIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/TFT_HX8357Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/u8g2Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/liquidCrystalOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/tftOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/keyIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src/menuIO/keypadIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/examples/SSD1306Ascii_Button_Navigation/Button_Navigation/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/examples/adafruitGfx_eTFT/TFT_eSPI/ArduinoMenu_LilyGo_TTGO_T-display_demo/bmp.h"
)

target_include_directories(pac-arduinomenu-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoMenu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-arduinomenu-library INTERFACE
    arduino-compat
    pac-sd
    pac-adafruit-gfx-library
    pac-liquidcrystal
)
