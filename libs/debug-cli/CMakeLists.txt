add_library(pac-debug-cli INTERFACE)

target_sources(pac-debug-cli INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/debug-cli/DbgCliNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/debug-cli/DbgCliCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/debug-cli/DbgCliTopic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/debug-cli/DbgCliNode.h"
  "${CMAKE_CURRENT_LIST_DIR}/debug-cli/DbgCliCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/debug-cli/DbgCliTopic.h"
)

target_include_directories(pac-debug-cli INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/debug-cli"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-debug-cli INTERFACE
    arduino-compat
)
