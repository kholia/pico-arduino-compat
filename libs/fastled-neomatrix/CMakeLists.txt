add_library(pac-fastled-neomatrix INTERFACE)

target_sources(pac-fastled-neomatrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/FastLED_NeoMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/FastLED_NeoMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/fontzoom/fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo64/smileytongue24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo64/yellowsmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo64/linux32.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo64/heart24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo64/bluesmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo64/google32.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/espgifread/GifPlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/espgifread/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo/smileytongue24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo/yellowsmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo/linux32.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo/heart24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo/bluesmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/MatrixGFXDemo/google32.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix/examples/NeoMatrix_LEDMatrix/config.h"
)

target_include_directories(pac-fastled-neomatrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastLED_NeoMatrix"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-fastled-neomatrix INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
