add_library(pixie INTERFACE)

target_sources(pixie INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pixie/src/Pixie.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixie/src/font_alt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pixie/src/Pixie.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pixie/src/Pixie_Icon_Pack.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pixie/src/font.h"
)

target_include_directories(pixie INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pixie/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pixie INTERFACE
    arduino-compat
)
