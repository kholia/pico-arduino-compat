add_library(pac-ucglib INTERFACE)

target_sources(pac-ucglib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/Ucglib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_oled_128x128_ilsoft.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_vector_font_data.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_clip.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ili9163.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_240x320_ili9341.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_seps225.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ili9325_spi.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_circle.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_default_cb.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_ccs.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_hx8352c.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_box.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ili9486.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_oled_160x128_samsung.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_oled_96x64_univision.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_oled_128x128_univision.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ld50t6160.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_line.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ili9341.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_oled_128x128_ft.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_240x320_ili9325_spi.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_pcf8833.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_320x480_ili9486.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_pixel_font_data.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_128x128_ili9163.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ssd1351.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_font.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_240x400_hx8352c.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_scale.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_init.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_pixel.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ili9325.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_com_msg_api.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_msg_api.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_128x160_st7735.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_240x320_itdb02.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_st7735.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ssd1289.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_132x132_pcf8833.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_tft_240x320_ssd1289.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_polygon.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_bitmap.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_rotate.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg_dev_ic_ssd1331.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/Ucglib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src/clib/ucg.h"
)

target_include_directories(pac-ucglib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ucglib_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ucglib INTERFACE
    arduino-compat
)
