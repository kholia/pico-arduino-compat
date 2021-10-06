add_library(tinycmdtable INTERFACE)

target_sources(tinycmdtable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinycmdtable/src/tinyCmdTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinycmdtable/src/tinyCmdTable.h"
)

target_include_directories(tinycmdtable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinycmdtable/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinycmdtable INTERFACE
    arduino-compat
)
