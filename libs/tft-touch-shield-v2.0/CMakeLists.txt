add_library(pac-tft-touch-shield-v2.0 INTERFACE)

target_sources(pac-tft-touch-shield-v2.0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V2/SeeedTouchScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V2/TFTv2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V2/font.c"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V2/TFTv2.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V2/SeeedTouchScreen.h"
)

target_include_directories(pac-tft-touch-shield-v2.0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tft-touch-shield-v2.0 INTERFACE
    arduino-compat
)
