add_library(pac-rgb-matrix-panel INTERFACE)

target_sources(pac-rgb-matrix-panel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel/RGBmatrixPanel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel/extras/sine.c"
  "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel/RGBmatrixPanel.h"
  "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel/examples/colorwheel_progmem_32x32/image.h"
  "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel/examples/PanelGFXDemo_16x32/smileytongue24.h"
)

target_include_directories(pac-rgb-matrix-panel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RGB-matrix-Panel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-rgb-matrix-panel INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
