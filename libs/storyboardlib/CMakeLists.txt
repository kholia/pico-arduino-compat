add_library(pac-storyboardlib INTERFACE)

target_sources(pac-storyboardlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Storyboard/src/StoryBoardLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Storyboard/src/StoryBoardLib.h"
)

target_include_directories(pac-storyboardlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Storyboard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-storyboardlib INTERFACE
    arduino-compat
)
