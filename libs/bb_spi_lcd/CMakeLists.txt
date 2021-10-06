add_library(bb_spi_lcd INTERFACE)

target_sources(bb_spi_lcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bb_spi_lcd/src/bb_spi_lcd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bb_spi_lcd/linux/bb_spi_lcd.c"
  "${CMAKE_CURRENT_LIST_DIR}/bb_spi_lcd/linux/sample.c"
  "${CMAKE_CURRENT_LIST_DIR}/bb_spi_lcd/src/bb_spi_lcd.h"
  "${CMAKE_CURRENT_LIST_DIR}/bb_spi_lcd/examples/wio_dma_gif_demo/badger.h"
  "${CMAKE_CURRENT_LIST_DIR}/bb_spi_lcd/examples/spilcd_prop_font/FreeSerif12pt7b.h"
)

target_include_directories(bb_spi_lcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bb_spi_lcd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bb_spi_lcd INTERFACE
    arduino-compat
)
