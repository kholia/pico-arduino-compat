add_library(libyxml INTERFACE)

target_sources(libyxml INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibYxml/yxml.c"
  "${CMAKE_CURRENT_LIST_DIR}/LibYxml/yxml.h"
)

target_include_directories(libyxml INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibYxml"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libyxml INTERFACE
    arduino-compat
)
