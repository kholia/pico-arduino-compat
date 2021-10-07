add_library(pac-stripdisplay INTERFACE)

target_sources(pac-stripdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/StripDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/qdbmp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/XBMFont.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/qdbmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/XBMFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/StripDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/examples/SpaceInvaders/space_invader_05.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/examples/SpaceInvaders/space_invader_06.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/examples/SpaceInvaders/space_invader_02.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/examples/SpaceInvaders/space_invader_01.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/examples/SpaceInvaders/space_invader_04.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/examples/SpaceInvaders/space_invader_03.h"
  "${CMAKE_CURRENT_LIST_DIR}/StripDisplay/examples/SpaceInvaders/space_invader_07.h"
)

target_include_directories(pac-stripdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StripDisplay"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stripdisplay INTERFACE
    arduino-compat
)
