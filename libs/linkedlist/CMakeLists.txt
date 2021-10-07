add_library(pac-linkedlist INTERFACE)

target_sources(pac-linkedlist INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LinkedList/tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinkedList/LinkedList.h"
)

target_include_directories(pac-linkedlist INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LinkedList"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-linkedlist INTERFACE
    arduino-compat
)
