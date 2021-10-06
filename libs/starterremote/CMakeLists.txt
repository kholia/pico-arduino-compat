add_library(starterremote INTERFACE)

target_sources(starterremote INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/starterremote/src/StarterRemote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/starterremote/src/StarterRemote.h"
)

target_include_directories(starterremote INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/starterremote/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(starterremote INTERFACE
    arduino-compat
)
