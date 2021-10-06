add_library(ucos-ii INTERFACE)

target_sources(ucos-ii INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_q.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_core.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_cpu_c.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_dbg.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_tmr.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_mbox.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_sem.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_mem.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_flag.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_time.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_task.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/os_mutex.c"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/ucos_ii.h"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/cpu/os_cpu.h"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/cfg/oscfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/cfg/os_cfg_r.h"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/cfg/appcfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src/cfg/app_cfg.h"
)

target_include_directories(ucos-ii INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uCOS-II_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ucos-ii INTERFACE
    arduino-compat
)
