add_library(pac-pngenc INTERFACE)

target_sources(pac-pngenc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/linux/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/PNGenc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/zutil.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/adler32.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/trees.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/deflate.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/crc32.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/PNGenc.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/zutil.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/deflate.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/trees.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/gzguts.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/zlib.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/zconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src/crc32.h"
)

target_include_directories(pac-pngenc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PNGenc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pngenc INTERFACE
    arduino-compat
)
