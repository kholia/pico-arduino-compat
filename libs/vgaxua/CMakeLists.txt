add_library(vgaxua INTERFACE)

target_sources(vgaxua INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vgaxua/bitblit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgaxua/blit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgaxua/VGAXUA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgaxua/print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vgaxua/VGAXUA.h"
  "${CMAKE_CURRENT_LIST_DIR}/vgaxua/VGAXUAUtils.h"
)

target_include_directories(vgaxua INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vgaxua"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vgaxua INTERFACE
    arduino-compat
)
