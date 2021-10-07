add_library(pac-libyxml INTERFACE)

target_sources(pac-libyxml INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibYxml/yxml.c"
  "${CMAKE_CURRENT_LIST_DIR}/LibYxml/yxml.h"
)

target_include_directories(pac-libyxml INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibYxml"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-libyxml INTERFACE
    arduino-compat
)
