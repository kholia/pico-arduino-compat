add_library(fastled_tftwrapper_gfx INTERFACE)

target_sources(fastled_tftwrapper_gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_TFTWrapper_GFX/FastLED_TFTWrapper_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_TFTWrapper_GFX/FastLED_TFTWrapper_GFX.h"
)

target_include_directories(fastled_tftwrapper_gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastLED_TFTWrapper_GFX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastled_tftwrapper_gfx INTERFACE
    arduino-compat
)
