add_library(pac-lcdmenu INTERFACE)

target_sources(pac-lcdmenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdMenu/src/MenuItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/LcdMenu/src/LcdMenu.h"
)

target_include_directories(pac-lcdmenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdMenu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-lcdmenu INTERFACE
    arduino-compat
    pac-liquidcrystal
)
