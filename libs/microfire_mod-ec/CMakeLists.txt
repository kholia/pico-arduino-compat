add_library(microfire_mod-ec INTERFACE)

target_sources(microfire_mod-ec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mod-EC/src/uFire_Mod-EC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mod-EC/src/uFire_Mod-EC.h"
)

target_include_directories(microfire_mod-ec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mod-EC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microfire_mod-ec INTERFACE
    arduino-compat
)
