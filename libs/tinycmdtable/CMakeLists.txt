add_library(pac-tinycmdtable INTERFACE)

target_sources(pac-tinycmdtable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinycmdtable/src/tinyCmdTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinycmdtable/src/tinyCmdTable.h"
)

target_include_directories(pac-tinycmdtable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinycmdtable/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinycmdtable INTERFACE
    arduino-compat
)
