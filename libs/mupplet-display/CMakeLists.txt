add_library(mupplet-display INTERFACE)

target_sources(mupplet-display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/display_digits_max72xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/display_matrix_max72xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/mupplet_display.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/display_matrix_st7735.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/helper/mup_gfx_display.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/helper/mup_display.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/hardware/max72xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/hardware/max72xx_digits.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/hardware/max72xx_matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src/hardware/st7735_matrix.h"
)

target_include_directories(mupplet-display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mupplet-display/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(mupplet-display INTERFACE
    arduino-compat
    adafruit-gfx-library
)
