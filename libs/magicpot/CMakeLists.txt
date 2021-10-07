add_library(pac-magicpot INTERFACE)

target_sources(pac-magicpot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MagicPot/src/MagicPot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MagicPot/src/MagicPot.h"
)

target_include_directories(pac-magicpot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MagicPot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-magicpot INTERFACE
    arduino-compat
)
