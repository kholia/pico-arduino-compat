add_library(pac-md_menu INTERFACE)

target_sources(pac-md_menu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_Menu/src/MD_Menu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Menu/examples/Menu_Test/Menu_Test_Nav.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Menu/examples/Menu_Test/Menu_Test_Disp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Menu/src/MD_Menu.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Menu/src/MD_Menu_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_Menu/examples/Menu_Test/Menu_Test.h"
)

target_include_directories(pac-md_menu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_Menu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-md_menu INTERFACE
    arduino-compat
    pac-liquidcrystal
)
