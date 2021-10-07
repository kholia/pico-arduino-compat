add_library(pac-simpletaskmanager INTERFACE)

target_sources(pac-simpletaskmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src/SimpleTaskManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src/Task.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskCache/CacheDataTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskEnding/SerialLoopTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskEnding/DoSomethingTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskEnding/CalculateDataTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/Blink/LedBlinkTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/MultipleTasks/SerialLoopTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/MultipleTasks/LedBlinkTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src/Status.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src/SimpleTaskManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src/TasksPool.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src/Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src/LinkedList.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskCache/CacheDataTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskEnding/SerialLoopTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskEnding/CalculateDataTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/TaskEnding/DoSomethingTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/Blink/CustomTaskPool.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/Blink/LedBlinkTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/MultipleTasks/CustomTaskPool.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/MultipleTasks/LedBlinkTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/examples/MultipleTasks/SerialLoopTask.h"
)

target_include_directories(pac-simpletaskmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleTaskManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpletaskmanager INTERFACE
    arduino-compat
)
