add_library(magicpot INTERFACE)

target_sources(magicpot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MagicPot/src/MagicPot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MagicPot/src/MagicPot.h"
)

target_include_directories(magicpot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MagicPot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(magicpot INTERFACE
    arduino-compat
)
