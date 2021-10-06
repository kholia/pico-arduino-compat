add_library(freertos INTERFACE)

target_sources(freertos INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/variantHooks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/event_groups.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/heap_3.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/timers.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/stream_buffer.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/queue.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/port.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/tasks.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/list.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/atomic.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/stream_buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/task.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/event_groups.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/FreeRTOSConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/projdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/FreeRTOSVariant.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/message_buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/stack_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/Arduino_FreeRTOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/mpu_wrappers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/semphr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/portmacro.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/portable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src/list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/examples/GoldilocksAnalogueTestSuite/GA_Header.h"
)

target_include_directories(freertos INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_FreeRTOS_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(freertos INTERFACE
    arduino-compat
)
