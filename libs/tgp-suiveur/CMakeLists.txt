add_library(tgp-suiveur INTERFACE)

target_sources(tgp-suiveur INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Suiveur/Suiveur.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Suiveur/Suiveur.h"
)

target_include_directories(tgp-suiveur INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_Suiveur"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tgp-suiveur INTERFACE
    arduino-compat
)
