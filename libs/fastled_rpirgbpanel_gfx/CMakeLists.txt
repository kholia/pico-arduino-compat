add_library(fastled_rpirgbpanel_gfx INTERFACE)

target_sources(fastled_rpirgbpanel_gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_RPIRGBPanel_GFX/FastLED_RPIRGBPanel_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_RPIRGBPanel_GFX/FastLED_RPIRGBPanel_GFX.h"
)

target_include_directories(fastled_rpirgbpanel_gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastLED_RPIRGBPanel_GFX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastled_rpirgbpanel_gfx INTERFACE
    arduino-compat
)
