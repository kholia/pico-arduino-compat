add_library(pac-md_abutton INTERFACE)

target_sources(pac-md_abutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_AButton/src/MD_AButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_AButton/src/MD_AButton.h"
)

target_include_directories(pac-md_abutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_AButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_abutton INTERFACE
    arduino-compat
)
