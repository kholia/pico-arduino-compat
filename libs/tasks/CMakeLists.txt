add_library(pac-tasks INTERFACE)

target_sources(pac-tasks INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/src/Tasks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/src/Tasks.h"
)

target_include_directories(pac-tasks INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tasks/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tasks INTERFACE
    arduino-compat
)
