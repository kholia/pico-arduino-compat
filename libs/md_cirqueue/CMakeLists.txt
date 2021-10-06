add_library(md_cirqueue INTERFACE)

target_sources(md_cirqueue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_CirQueue/src/MD_CirQueue.h"
)

target_include_directories(md_cirqueue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_CirQueue/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_cirqueue INTERFACE
    arduino-compat
)
