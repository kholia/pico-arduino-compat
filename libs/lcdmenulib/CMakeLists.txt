add_library(pac-lcdmenulib INTERFACE)

target_sources(pac-lcdmenulib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib/src/LCDMenuLib_menu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib/src/LCDMenuLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib/src/LCDMenuLib_menu.h"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib/src/LCDMenuLib_makros.h"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib/src/LCDMenuLib.h"
)

target_include_directories(pac-lcdmenulib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lcdmenulib INTERFACE
    arduino-compat
)
