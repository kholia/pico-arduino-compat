add_library(pac-mrm-node INTERFACE)

target_sources(pac-mrm-node INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-node/src/mrm-node.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-node/src/mrm-node.h"
)

target_include_directories(pac-mrm-node INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-node/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-node INTERFACE
    arduino-compat
)
