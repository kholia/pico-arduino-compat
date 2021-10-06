add_library(esplora INTERFACE)

target_sources(esplora INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Esplora/src/Esplora.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Esplora/src/Esplora.h"
)

target_include_directories(esplora INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Esplora/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esplora INTERFACE
    arduino-compat
)
