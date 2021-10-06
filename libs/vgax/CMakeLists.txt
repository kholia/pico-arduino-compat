add_library(vgax INTERFACE)

target_sources(vgax INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vgax/blit8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgax/bitblit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgax/blit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgax/blit4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgax/VGAX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgax/print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgax/VGAXUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/vgax/VGAX.h"
)

target_include_directories(vgax INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vgax"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vgax INTERFACE
    arduino-compat
)
