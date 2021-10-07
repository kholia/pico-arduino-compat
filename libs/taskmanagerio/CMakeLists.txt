add_library(pac-taskmanagerio INTERFACE)

target_sources(pac-taskmanagerio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/SimpleSpinLock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TmLongSchedule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TaskManagerIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TaskTypes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/examples/mbed5NonRtos/mbedExample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/examples/mbedRtos/mbedExample.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/avrClockRollTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/InterruptTestCases.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/eventTestCases.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/reentrantLockingTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/ESPMultiThreadedTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/HighThroughputTestCases.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/taskManagerCoreTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TaskManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TaskPlatformDeps.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/MockTaskManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TaskManagerIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/ExecWithParameter.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/BasicInterruptAbstraction.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TaskTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TaskBlock.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/TmLongSchedule.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src/SimpleSpinLock.h"
  "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/tests/taskMgrTests/test_utils.h"
)

target_include_directories(pac-taskmanagerio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TaskManagerIO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-taskmanagerio INTERFACE
    arduino-compat
)
