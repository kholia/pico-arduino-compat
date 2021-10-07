add_library(pac-bitpack INTERFACE)

target_sources(pac-bitpack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitPack/src/BitPack.h"
)

target_include_directories(pac-bitpack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitPack/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bitpack INTERFACE
    arduino-compat
)
