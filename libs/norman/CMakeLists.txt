add_library(norman INTERFACE)

target_sources(norman INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Norman/Norman.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Norman/Norman.h"
)

target_include_directories(norman INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Norman"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(norman INTERFACE
    arduino-compat
)
