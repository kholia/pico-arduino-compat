add_library(liquidmenu INTERFACE)

target_sources(liquidmenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/LiquidMenu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/LiquidScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/LiquidLine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/LiquidSystem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/recognizeType.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/glyphs.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/LiquidMenu_debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/LiquidMenu_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src/LiquidMenu.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/examples/J_scrolling_menu/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/examples/D_buttons_menu/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/examples/H_system_menu/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/examples/F_focus_menu/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/examples/C_functions_menu/Button.h"
)

target_include_directories(liquidmenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidMenu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(liquidmenu INTERFACE
    arduino-compat
    official-liquid-crystal
)
