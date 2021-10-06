add_library(atom_dtu_nb INTERFACE)

target_sources(atom_dtu_nb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ATOM_DTU_NB/src/ATOM_DTU_NB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ATOM_DTU_NB/src/ATOM_DTU_NB.h"
)

target_include_directories(atom_dtu_nb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ATOM_DTU_NB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atom_dtu_nb INTERFACE
    arduino-compat
)
