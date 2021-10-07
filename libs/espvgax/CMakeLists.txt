add_library(pac-espvgax INTERFACE)

target_sources(pac-espvgax INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/ESPVGAX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/espvgax_blit.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/espvgax_hspi.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/espvgax_print.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/ESPVGAX.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/espvgax_draw.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/courier10.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/monodos8.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/century11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/lucida10.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/monaco9.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/ptmono9.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/ocra9.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/tahoma11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/arial12.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/times11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/mfont6.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/ufont6.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/monodos12.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/lucida11.h"
  "${CMAKE_CURRENT_LIST_DIR}/espvgax/fonts/mssans10.h"
)

target_include_directories(pac-espvgax INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/espvgax"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espvgax INTERFACE
    arduino-compat
)
