add_library(pac-noolite_tx INTERFACE)

target_sources(pac-noolite_tx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-noolite-tx/noolite_tx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-noolite-tx/noolite_tx.h"
)

target_include_directories(pac-noolite_tx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-noolite-tx"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-noolite_tx INTERFACE
    arduino-compat
)
