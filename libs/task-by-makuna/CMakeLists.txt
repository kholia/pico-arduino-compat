add_library(pac-task-by-makuna INTERFACE)

target_sources(pac-task-by-makuna INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/TaskManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/MessageTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/TaskManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/FunctionTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/TaskMacros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/src/MessageTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/ButtonInterrupt/ButtonTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/RotaryEncoder/RotaryEncoderTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/MessageTask/MainTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/MessageTask/ButtonTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/MessageTask/Messages.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/BlinkUsingCustomTask/taskBlinkLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/BlinkUsingTaskMacros/taskBlinkLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/PatternTask/taskPattern.h"
  "${CMAKE_CURRENT_LIST_DIR}/Task/examples/ButtonTask/ButtonTask.h"
)

target_include_directories(pac-task-by-makuna INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Task/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-task-by-makuna INTERFACE
    arduino-compat
)
