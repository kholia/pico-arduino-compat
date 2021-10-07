add_library(pac-tgp-suiveur INTERFACE)

target_sources(pac-tgp-suiveur INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Suiveur/Suiveur.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Suiveur/Suiveur.h"
)

target_include_directories(pac-tgp-suiveur INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_Suiveur"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tgp-suiveur INTERFACE
    arduino-compat
)
