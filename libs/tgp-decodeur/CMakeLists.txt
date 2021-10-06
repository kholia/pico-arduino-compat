add_library(tgp-decodeur INTERFACE)

target_sources(tgp-decodeur INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Decodeur/Decodeur.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Decodeur/Decodeur.h"
)

target_include_directories(tgp-decodeur INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_Decodeur"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tgp-decodeur INTERFACE
    arduino-compat
)
