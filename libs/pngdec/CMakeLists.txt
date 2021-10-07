add_library(pac-pngdec INTERFACE)

target_sources(pac-pngdec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/linux/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/PNGdec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/zutil.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/adler32.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/infback.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/inffast.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/inftrees.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/inflate.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/crc32.c"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/PNGdec.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/zutil.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/inffast.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/inftrees.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/inffixed.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/zlib.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/zconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/crc32.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src/inflate.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/examples/m5stickc_plus_test/m5logosmall.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/examples/png_transparency/octocat_4bpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/examples/1bpp_transparent_oled/octocat_1bpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/examples/png_benchmark/octocat_32bpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/examples/png_benchmark/octocat_4bpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/PNGdec/examples/png_benchmark/octocat_8bpp.h"
)

target_include_directories(pac-pngdec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PNGdec/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pngdec INTERFACE
    arduino-compat
)
