add_library(pac-due_can INTERFACE)

target_sources(pac-due_can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/due_can/src/due_can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/due_can/src/due_can.h"
)

target_include_directories(pac-due_can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/due_can/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-due_can INTERFACE
    arduino-compat
)
