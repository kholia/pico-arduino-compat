add_library(pac-tgp-bouton INTERFACE)

target_sources(pac-tgp-bouton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Bouton/BoutonBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Bouton/Bouton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Bouton/Bouton.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Bouton/BoutonBase.h"
)

target_include_directories(pac-tgp-bouton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_Bouton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tgp-bouton INTERFACE
    arduino-compat
)
