add_library(fatfs INTERFACE)

target_sources(fatfs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/ff_gen_drv.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/diskio.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/ff.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/option/cc932.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/option/ccsbcs.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/option/cc950.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/option/syscall.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/option/cc936.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/option/cc949.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/drivers/sd_diskio.c"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/FatFs.h"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/diskio.h"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/ff.h"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/integer.h"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/ff_gen_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/ffconf_template.h"
  "${CMAKE_CURRENT_LIST_DIR}/FatFs/src/drivers/sd_diskio.h"
)

target_include_directories(fatfs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FatFs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fatfs INTERFACE
    arduino-compat
)
