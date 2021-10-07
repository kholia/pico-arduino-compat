add_library(pac-mini-grafx INTERFACE)

target_sources(pac-mini-grafx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_29T5.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_29.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_43.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/SSD1331_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_42.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_75.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/DisplayDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPaperPervasive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_154.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/Carousel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/ILI9341_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_154D67.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/MiniGrafx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/examples/CSN_A2/CSN_A2_DEMO/CSN_A2_ThermalPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/MiniGrafx.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_43.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_75.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/MiniGrafxFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/ILI9341_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/DisplayDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_154D67.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPaperPervasive.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_42.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/SSD1331_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_29.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_154.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/EPD_WaveShare_29T5.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src/Carousel.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/examples/CSN_A2/CSN_A2_DEMO/CSN_A2_ThermalPrinter.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/examples/ILI9341/BasicDrawing/image.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/examples/ILI9341/DrawPaletteImage_4Bit/image.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/examples/ILI9341/DrawBMP/image.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/examples/ILI9341/DrawPaletteImage_1Bit/image.h"
  "${CMAKE_CURRENT_LIST_DIR}/minigrafx/examples/SSD1331/SSD1331_SPI/image.h"
)

target_include_directories(pac-mini-grafx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/minigrafx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mini-grafx INTERFACE
    arduino-compat
)
