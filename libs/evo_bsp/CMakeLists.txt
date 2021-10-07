add_library(pac-evo_bsp INTERFACE)

target_sources(pac-evo_bsp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/evo_bsp/src/evo_bsp.h"
)

target_include_directories(pac-evo_bsp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/evo_bsp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-evo_bsp INTERFACE
    arduino-compat
)
