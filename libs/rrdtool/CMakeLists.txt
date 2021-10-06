add_library(rrdtool INTERFACE)

target_sources(rrdtool INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_create.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_hw_update.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_diff.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_hw_math.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_info.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_open.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/plbasename.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_parsetime.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_update.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_hw.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_resize.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_rpncalc.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_thread_safe.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_dump.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_version.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_last.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_error.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/strftime.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/hash_32.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_getopt1.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_format.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_tune.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_first.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_nan_inf.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_lastupdate.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_tool.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_getopt.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_fetch.c"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_i18n.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/strftime.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_hw_math.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_is_thread_safe.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/plbasename.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/fnv.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_getopt.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_xport.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_config_bottom.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_hw_update.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/gettext.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/unused.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_format.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_rpncalc.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_hw.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_parsetime.h"
  "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src/rrd_tool.h"
)

target_include_directories(rrdtool INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rrdtool_ESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rrdtool INTERFACE
    arduino-compat
)
