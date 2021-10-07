add_library(pac-norman INTERFACE)

target_sources(pac-norman INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Norman/Norman.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Norman/Norman.h"
)

target_include_directories(pac-norman INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Norman"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-norman INTERFACE
    arduino-compat
)
