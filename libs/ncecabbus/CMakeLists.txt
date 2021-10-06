add_library(ncecabbus INTERFACE)

target_sources(ncecabbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src/NceCabBus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src/NceCabBus.h"
  "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src/keycodes.h"
)

target_include_directories(ncecabbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NceCabBus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ncecabbus INTERFACE
    arduino-compat
)
