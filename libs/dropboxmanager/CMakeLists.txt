add_library(dropboxmanager INTERFACE)

target_sources(dropboxmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DropboxManager/src/DropboxManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DropboxManager/src/DropboxManager.h"
)

target_include_directories(dropboxmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DropboxManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dropboxmanager INTERFACE
    arduino-compat
)
