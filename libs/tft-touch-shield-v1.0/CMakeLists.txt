add_library(tft-touch-shield-v1.0 INTERFACE)

target_sources(tft-touch-shield-v1.0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V1/TFT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V1/font.c"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V1/TFT_Touch_Shield_V1.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V1/TFT.h"
)

target_include_directories(tft-touch-shield-v1.0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFT_Touch_Shield_V1"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tft-touch-shield-v1.0 INTERFACE
    arduino-compat
)
