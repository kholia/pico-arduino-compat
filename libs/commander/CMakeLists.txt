add_library(commander INTERFACE)

target_sources(commander INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Commander/src/Commander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commander/src/utilities/CommandHelpTags.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Commander/src/Commander.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commander/src/utilities/CommandHelpTags.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commander/src/utilities/htmlUtilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commander/src/prefabs/Display/gfxPrefab.h"
  "${CMAKE_CURRENT_LIST_DIR}/Commander/src/prefabs/SDCards/PrefabFileNavigator.h"
)

target_include_directories(commander INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Commander/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(commander INTERFACE
    arduino-compat
)
