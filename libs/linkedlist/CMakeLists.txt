add_library(linkedlist INTERFACE)

target_sources(linkedlist INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LinkedList/tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinkedList/LinkedList.h"
)

target_include_directories(linkedlist INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LinkedList"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(linkedlist INTERFACE
    arduino-compat
)
