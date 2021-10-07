add_library(pac-nintendo INTERFACE)

target_sources(pac-nintendo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/GamecubeAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/N64API.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/Gamecube.c"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/Gamecube_N64.c"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/N64.c"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/N64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/Gamecube_N64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/N64API.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/GamecubeAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/Gamecube.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src/Nintendo.h"
)

target_include_directories(pac-nintendo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nintendo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nintendo INTERFACE
    arduino-compat
)
