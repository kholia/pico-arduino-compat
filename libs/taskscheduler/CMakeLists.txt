add_library(pac-taskscheduler INTERFACE)

target_sources(pac-taskscheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example16_Multitab/file2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example16_Multitab/file1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example16_Multitab/ts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example20_StatusRequest_LTS_WDT_Timeout_Object/SuperSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example21_OO_Callbacks/SuperSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example21_OO_Callbacks/Ticker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example21_OO_Callbacks/Calculator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example16_Multitab/header.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/src/TaskSchedulerSleepMethods.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/src/TaskSchedulerDeclarations.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/src/TaskScheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example20_StatusRequest_LTS_WDT_Timeout_Object/SuperSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example21_OO_Callbacks/Ticker.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example21_OO_Callbacks/Calculator.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/examples/Scheduler_example21_OO_Callbacks/SuperSensor.h"
)

target_include_directories(pac-taskscheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TaskScheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-taskscheduler INTERFACE
    arduino-compat
)
