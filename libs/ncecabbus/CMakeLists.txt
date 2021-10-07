add_library(pac-ncecabbus INTERFACE)

target_sources(pac-ncecabbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src/NceCabBus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src/NceCabBus.h"
  "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src/keycodes.h"
)

target_include_directories(pac-ncecabbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ncecabbus INTERFACE
    arduino-compat
)
