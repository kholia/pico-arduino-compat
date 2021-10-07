add_library(pac-pu2clr-si470x INTERFACE)

target_sources(pac-pu2clr-si470x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/SI470X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_03_STM32_OLED/Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_02_TFT_display/Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/SI470X.h"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_03_STM32_OLED/Rotary.h"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_02_TFT_display/Serif_plain_7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_02_TFT_display/Rotary.h"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_02_TFT_display/Serif_plain_14.h"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_02_TFT_display/Serif_plain_8.h"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_02_TFT_display/Serif_plain_10.h"
  "${CMAKE_CURRENT_LIST_DIR}/SI470X/examples/si470x_02_TFT_display/DSEG7_Classic_Mini_Regular_30.h"
)

target_include_directories(pac-pu2clr-si470x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SI470X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pu2clr-si470x INTERFACE
    arduino-compat
)
