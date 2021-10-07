add_library(pac-queue INTERFACE)

target_sources(pac-queue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Queue/src/cppQueue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Queue/src/cppQueue.h"
)

target_include_directories(pac-queue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Queue/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-queue INTERFACE
    arduino-compat
)
