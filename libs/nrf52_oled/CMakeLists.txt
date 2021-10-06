add_library(nrf52_oled INTERFACE)

target_sources(nrf52_oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/OLEDDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/OLEDDisplayUi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/OLEDDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/OLEDDisplayUi.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/nRF_SH1106.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/nRF_SSD1306Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/OLEDDisplayFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/nRF_SSD1306Spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/nRF_SSD1306.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/nRF_SH1106Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src/nRF_SH1106Spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/examples/SSD1306ClockDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/examples/SSD1306TwoScreenDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/examples/SSD1306UiDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/examples/SSD1306SimpleDemo/images.h"
)

target_include_directories(nrf52_oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nRF52_OLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nrf52_oled INTERFACE
    arduino-compat
)
