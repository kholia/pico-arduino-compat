add_library(pu2clr-bk108x INTERFACE)

target_sources(pu2clr-bk108x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bk108x/BK108X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bk108x/examples/bk108x_02_tft_display/tft_st7735/Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bk108x/BK108X.h"
  "${CMAKE_CURRENT_LIST_DIR}/bk108x/examples/bk108x_02_tft_display/tft_st7735/Serif_plain_7.h"
  "${CMAKE_CURRENT_LIST_DIR}/bk108x/examples/bk108x_02_tft_display/tft_st7735/Rotary.h"
  "${CMAKE_CURRENT_LIST_DIR}/bk108x/examples/bk108x_02_tft_display/tft_st7735/Serif_plain_14.h"
  "${CMAKE_CURRENT_LIST_DIR}/bk108x/examples/bk108x_02_tft_display/tft_st7735/DSEG7_Classic_Mini_Regular_30.h"
)

target_include_directories(pu2clr-bk108x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bk108x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pu2clr-bk108x INTERFACE
    arduino-compat
)
