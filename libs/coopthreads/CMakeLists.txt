add_library(pac-coopthreads INTERFACE)

target_sources(pac-coopthreads INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/src/platform/arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/st01_enter_exit.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t04_yield_after.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t03_idle_run.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t09_stack_wm.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t07_idle_wait.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t06_wait_notify_all.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t08_wait_cond.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t05_wait_notify_sngl.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t01_sched_switch.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/t02_idle.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/src/coop_threads.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/src/platform/unix.c"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/extras/test/test_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/src/coop_threads.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/src/coop_config.h"
)

target_include_directories(pac-coopthreads INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CoopThreads/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-coopthreads INTERFACE
    arduino-compat
)
