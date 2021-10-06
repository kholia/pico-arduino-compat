add_library(mrm-node INTERFACE)

target_sources(mrm-node INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-node/src/mrm-node.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-node/src/mrm-node.h"
)

target_include_directories(mrm-node INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-node/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-node INTERFACE
    arduino-compat
)
