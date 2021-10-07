add_library(pac-microfire_mod-orp INTERFACE)

target_sources(pac-microfire_mod-orp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mod-ORP/src/uFire_Mod-ORP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mod-ORP/src/uFire_Mod-ORP.h"
)

target_include_directories(pac-microfire_mod-orp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mod-ORP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microfire_mod-orp INTERFACE
    arduino-compat
)
