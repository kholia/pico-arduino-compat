add_library(blocknot INTERFACE)

target_sources(blocknot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlockNot/src/BlockNot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlockNot/src/BlockNot.h"
)

target_include_directories(blocknot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlockNot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blocknot INTERFACE
    arduino-compat
)
