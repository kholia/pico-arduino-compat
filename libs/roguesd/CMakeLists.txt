add_library(pac-roguesd INTERFACE)

target_sources(pac-roguesd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RogueSD/RogueSD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RogueSD/RogueSD.h"
)

target_include_directories(pac-roguesd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RogueSD"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-roguesd INTERFACE
    arduino-compat
)
