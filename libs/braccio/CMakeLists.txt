add_library(pac-braccio INTERFACE)

target_sources(pac-braccio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Braccio/src/Braccio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Braccio/src/Braccio.h"
)

target_include_directories(pac-braccio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Braccio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-braccio INTERFACE
    arduino-compat
)
