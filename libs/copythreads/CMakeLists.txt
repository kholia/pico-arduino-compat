add_library(pac-copythreads INTERFACE)

target_sources(pac-copythreads INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CopyThreads/src/Cth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CopyThreads/src/cthread.c"
  "${CMAKE_CURRENT_LIST_DIR}/CopyThreads/examples/c/hello_world.c"
  "${CMAKE_CURRENT_LIST_DIR}/CopyThreads/examples/c/wait_for_condition.c"
  "${CMAKE_CURRENT_LIST_DIR}/CopyThreads/src/Cth.h"
  "${CMAKE_CURRENT_LIST_DIR}/CopyThreads/src/cthread.h"
)

target_include_directories(pac-copythreads INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CopyThreads/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-copythreads INTERFACE
    arduino-compat
)
