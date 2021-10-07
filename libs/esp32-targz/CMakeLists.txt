add_library(pac-esp32-targz INTERFACE)

target_sources(pac-esp32-targz INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/ESP32-targz-lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/adler32.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/genlz77.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/tinfgzip.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/tinfzlib.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/tinflate.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/defl_static.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/crc32.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/TinyUntar/untar.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/ESP32-targz.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/ESP32-targz-lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/defl_static.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/uzlib.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/uzlib_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/tinf.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/uzlib/tinf_compat.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/helpers/md5_sum.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/helpers/path_tools.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src/TinyUntar/untar.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/examples/Test_tar_gz_tgz/test_files.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/examples/Test_tar_gz_tgz/test_gz_in_irom.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/examples/Test_tar_gz_tgz/test_tools.h"
)

target_include_directories(pac-esp32-targz INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-targz/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-esp32-targz INTERFACE
    arduino-compat
    pac-sd
)
