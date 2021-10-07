add_library(pac-onebitdisplay INTERFACE)

target_sources(pac-onebitdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneBitDisplay/src/OneBitDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneBitDisplay/test/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/OneBitDisplay/test/notes.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneBitDisplay/src/OneBitDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneBitDisplay/examples/uc1609_test/uc1609.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneBitDisplay/examples/prop_font_demo/FreeSerif12pt7b.h"
)

target_include_directories(pac-onebitdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneBitDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-onebitdisplay INTERFACE
    arduino-compat
)
