add_library(pac-lcdmenulib2 INTERFACE)

target_sources(pac-lcdmenulib2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib2/src/LCDMenuLib2_menu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib2/src/LCDMenuLib2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib2/src/LCDMenuLib2_typedef.h"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib2/src/LCDMenuLib2_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib2/src/LCDMenuLib2.h"
  "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib2/src/LCDMenuLib2_menu.h"
)

target_include_directories(pac-lcdmenulib2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCDMenuLib2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lcdmenulib2 INTERFACE
    arduino-compat
)
