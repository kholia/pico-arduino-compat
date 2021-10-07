add_library(pac-tgp-decodeur INTERFACE)

target_sources(pac-tgp-decodeur INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Decodeur/Decodeur.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Decodeur/Decodeur.h"
)

target_include_directories(pac-tgp-decodeur INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_Decodeur"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tgp-decodeur INTERFACE
    arduino-compat
)
