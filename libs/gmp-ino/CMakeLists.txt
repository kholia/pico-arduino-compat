add_library(gmp-ino INTERFACE)

target_sources(gmp-ino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/gmp-ino/src/mini-mpq.c"
  "${CMAKE_CURRENT_LIST_DIR}/gmp-ino/src/mini-gmp.c"
  "${CMAKE_CURRENT_LIST_DIR}/gmp-ino/src/gmp-ino.h"
  "${CMAKE_CURRENT_LIST_DIR}/gmp-ino/src/mini-gmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/gmp-ino/src/mini-mpq.h"
)

target_include_directories(gmp-ino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/gmp-ino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gmp-ino INTERFACE
    arduino-compat
)
