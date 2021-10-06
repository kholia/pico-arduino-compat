add_library(microfire_mod-ph INTERFACE)

target_sources(microfire_mod-ph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mod-pH/src/uFire_Mod-pH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mod-pH/src/uFire_Mod-pH.h"
)

target_include_directories(microfire_mod-ph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mod-pH/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microfire_mod-ph INTERFACE
    arduino-compat
)
