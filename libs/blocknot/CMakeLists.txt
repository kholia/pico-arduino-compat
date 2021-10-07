add_library(pac-blocknot INTERFACE)

target_sources(pac-blocknot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlockNot/src/BlockNot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlockNot/src/BlockNot.h"
)

target_include_directories(pac-blocknot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlockNot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blocknot INTERFACE
    arduino-compat
)
