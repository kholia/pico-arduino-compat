add_library(espvgax2 INTERFACE)

target_sources(espvgax2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/ESPVGAX2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/ESPVGAX2.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/espvgax2_blit.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/espvgax2_draw.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/espvgax2_print.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/courier10.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/monodos8.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/century11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/lucida10.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/monaco9.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/ptmono9.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/ocra9.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/tahoma11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/arial12.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/times11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/mfont6.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/ufont6.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/monodos12.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/lucida11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/fonts2/mssans10.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/images2/logo128.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/images2/pirate256.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/images2/logomario.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax2/images2/pirate320.h"
)

target_include_directories(espvgax2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/espvgax2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espvgax2 INTERFACE
    arduino-compat
)
