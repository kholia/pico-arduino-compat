add_library(ssd1306ascii INTERFACE)

target_sources(ssd1306ascii INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/SSD1306Ascii.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/doc/MainPage/SSD1306mainpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/SSD1306AsciiAvrI2c.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/SSD1306AsciiSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/SSD1306init.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/SSD1306AsciiWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/SSD1306Ascii.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/SSD1306AsciiSoftSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Callibri10.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/fixednums7x15.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/TimesNewRoman16.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Arial14.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Verdana12.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Roosewood26.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/System5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/TimesNewRoman16_bold.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Callibri14.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/lcd5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/font8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/fixednums8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/X11fixed7x14.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/lcdnums12x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/utf8font10x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Cooper21.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Callibri11.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/TimesNewRoman13_italic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Iain5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/X11fixed7x14B.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Verdana12_italic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Arial_bold_14.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/CalLite24.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/TimesNewRoman16_italic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Verdana12_bold.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/newbasic3x5.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Verdana_digits_24.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Adafruit5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Callibri11_bold.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Corsiva_12.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Wendy3x5.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Roosewood22.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/ZevvPeep8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/SystemFont5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/fixed_bold10x15.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/CalBlk36.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/TimesNewRoman13.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Callibri11_italic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/fixednums15x31.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Cooper19.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Stang5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/allFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/cp437font8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Callibri15.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/lcdnums14x24.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/fonts/Cooper26.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/utility/AvrI2c.h"
  "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src/utility/DigitalOutput.h"
)

target_include_directories(ssd1306ascii INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSD1306Ascii/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssd1306ascii INTERFACE
    arduino-compat
)
