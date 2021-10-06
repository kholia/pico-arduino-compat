add_library(unziplib INTERFACE)

target_sources(unziplib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/unzipLIB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/Linux/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/zutil.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/unzip.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/adler32.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/infback.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/inffast.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/inftrees.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/inflate.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/crc32.c"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/zutil.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/inffast.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/inftrees.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/inffixed.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/gzguts.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/unzip.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/zlib.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/zconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/crc32.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/unzipLIB.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src/inflate.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/examples/list_files/bmp_icons.h"
  "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/examples/lcd_example/bmp_icons.h"
)

target_include_directories(unziplib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/unzipLIB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(unziplib INTERFACE
    arduino-compat
)
