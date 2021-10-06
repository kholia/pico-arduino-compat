add_library(robopoly-prismino INTERFACE)

target_sources(robopoly-prismino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_PRismino/src/prismino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_PRismino/src/prismino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_PRismino/examples/MarioSounds/pitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_PRismino/examples/MarioSounds/sound.h"
)

target_include_directories(robopoly-prismino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robopoly_PRismino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robopoly-prismino INTERFACE
    arduino-compat
)
