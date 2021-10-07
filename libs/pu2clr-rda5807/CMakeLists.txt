add_library(pac-pu2clr-rda5807 INTERFACE)

target_sources(pac-pu2clr-rda5807 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RDA5807/RDA5807.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RDA5807/examples/RDA5807_02_TFT_display/Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RDA5807/RDA5807.h"
  "${CMAKE_CURRENT_LIST_DIR}/RDA5807/examples/RDA5807_02_TFT_display/Serif_plain_7.h"
  "${CMAKE_CURRENT_LIST_DIR}/RDA5807/examples/RDA5807_02_TFT_display/Rotary.h"
  "${CMAKE_CURRENT_LIST_DIR}/RDA5807/examples/RDA5807_02_TFT_display/Serif_plain_14.h"
  "${CMAKE_CURRENT_LIST_DIR}/RDA5807/examples/RDA5807_02_TFT_display/DSEG7_Classic_Mini_Regular_30.h"
)

target_include_directories(pac-pu2clr-rda5807 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RDA5807"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pu2clr-rda5807 INTERFACE
    arduino-compat
)
