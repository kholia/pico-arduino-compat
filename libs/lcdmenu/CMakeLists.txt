add_library(lcdmenu INTERFACE)

target_sources(lcdmenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdMenu/src/MenuItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/LcdMenu/src/LcdMenu.h"
)

target_include_directories(lcdmenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdMenu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(lcdmenu INTERFACE
    arduino-compat
    official-liquid-crystal
)
