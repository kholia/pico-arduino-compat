add_library(pac-hyperdeck INTERFACE)

target_sources(pac-hyperdeck INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDeck/HyperDeck.h"
)

target_include_directories(pac-hyperdeck INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDeck"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hyperdeck INTERFACE
    arduino-compat
)
