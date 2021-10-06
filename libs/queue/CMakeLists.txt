add_library(queue INTERFACE)

target_sources(queue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Queue/src/cppQueue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Queue/src/cppQueue.h"
)

target_include_directories(queue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Queue/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(queue INTERFACE
    arduino-compat
)
