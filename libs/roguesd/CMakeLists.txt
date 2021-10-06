add_library(roguesd INTERFACE)

target_sources(roguesd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RogueSD/RogueSD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RogueSD/RogueSD.h"
)

target_include_directories(roguesd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RogueSD"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(roguesd INTERFACE
    arduino-compat
)
