add_library(pac-jm_scheduler INTERFACE)

target_sources(pac-jm_scheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/src/jm_Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/src/jm_Scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Count1/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Clock4/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Beat3/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Wakeup1/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Clock1/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Blink2/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Beat1/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Clock3/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Beat2/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Clock1_Ansi/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Blink3/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Blink1/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Clock2/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Blink4/led.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/examples/Blink5/led.h"
)

target_include_directories(pac-jm_scheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_Scheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jm_scheduler INTERFACE
    arduino-compat
)
