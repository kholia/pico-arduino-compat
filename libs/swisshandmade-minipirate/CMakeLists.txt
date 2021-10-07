add_library(pac-swisshandmade-minipirate INTERFACE)

target_sources(pac-swisshandmade-minipirate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/examples/Minipirate/Strings_PGM_MEM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/examples/Minipirate/modeI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/examples/Minipirate/baseIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/src/SwissHandmade_Minipirate-Dummy.h"
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/examples/Minipirate/baseIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/examples/Minipirate/modeBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/examples/Minipirate/Strings_PGM_MEM.h"
  "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/examples/Minipirate/modeI2C.h"
)

target_include_directories(pac-swisshandmade-minipirate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MiniPirate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-swisshandmade-minipirate INTERFACE
    arduino-compat
)
