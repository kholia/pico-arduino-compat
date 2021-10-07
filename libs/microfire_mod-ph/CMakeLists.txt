add_library(pac-microfire_mod-ph INTERFACE)

target_sources(pac-microfire_mod-ph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mod-pH/src/uFire_Mod-pH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mod-pH/src/uFire_Mod-pH.h"
)

target_include_directories(pac-microfire_mod-ph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mod-pH/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microfire_mod-ph INTERFACE
    arduino-compat
)
