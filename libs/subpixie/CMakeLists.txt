add_library(subpixie INTERFACE)

target_sources(subpixie INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Subpixie/font_8x8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Subpixie/font_6x8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Subpixie/subpixie.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Subpixie/subpixie.h"
  "${CMAKE_CURRENT_LIST_DIR}/Subpixie/subpixie_bgr.h"
)

target_include_directories(subpixie INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Subpixie"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(subpixie INTERFACE
    arduino-compat
)
