add_library(hyperdeck INTERFACE)

target_sources(hyperdeck INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDeck/HyperDeck.h"
)

target_include_directories(hyperdeck INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDeck"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hyperdeck INTERFACE
    arduino-compat
)
