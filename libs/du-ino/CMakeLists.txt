add_library(du-ino INTERFACE)

target_sources(du-ino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_clock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_dsp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_function.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_mcp4922.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_widgets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_sh1106.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_scales.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_indicators.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_scales.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_indicators.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_widgets.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_save.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_sh1106.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_function.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_dsp.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/du-ino/src/du-ino_mcp4922.h"
)

target_include_directories(du-ino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/du-ino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(du-ino INTERFACE
    arduino-compat
)
