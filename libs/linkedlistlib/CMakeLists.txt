add_library(pac-linkedlistlib INTERFACE)

target_sources(pac-linkedlistlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-LinkedList/src/LinkedListLib.h"
)

target_include_directories(pac-linkedlistlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-LinkedList/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-linkedlistlib INTERFACE
    arduino-compat
)
