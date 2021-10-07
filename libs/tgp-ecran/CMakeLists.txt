add_library(pac-tgp-ecran INTERFACE)

target_sources(pac-tgp-ecran INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Ecran/Ecran.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Ecran/Ecran.h"
)

target_include_directories(pac-tgp-ecran INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_Ecran"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tgp-ecran INTERFACE
    arduino-compat
)
