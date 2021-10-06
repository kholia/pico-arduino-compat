add_library(fastled_spitft_gfx INTERFACE)

target_sources(fastled_spitft_gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/FastLED_SPITFT_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/FastLED_SPITFT_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/examples/MatrixGFXDemo/smileytongue24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/examples/MatrixGFXDemo/yellowsmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/examples/MatrixGFXDemo/linux32.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/examples/MatrixGFXDemo/heart24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/examples/MatrixGFXDemo/bluesmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX/examples/MatrixGFXDemo/google32.h"
)

target_include_directories(fastled_spitft_gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastLED_SPITFT_GFX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastled_spitft_gfx INTERFACE
    arduino-compat
)
