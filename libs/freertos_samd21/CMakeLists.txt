add_library(freertos_samd21 INTERFACE)

target_sources(freertos_samd21 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/error_hooks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/examples/CompilerAndLinker_Test/GameMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/examples/CompilerAndLinker_Test/GameData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/idle_hook.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/event_groups.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/heap_4bis.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/timers.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/stream_buffer.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/queue.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/port.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/runTimeStats_hooks.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/tasks.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/list.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/croutine.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/examples/CompilerAndLinker_Test/GameThing.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/FreeRTOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/stream_buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/task.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/event_groups.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/FreeRTOSConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/projdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/deprecated_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/error_hooks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/croutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/message_buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/stack_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/runTimeStats_hooks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/mpu_wrappers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/mpu_prototypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/semphr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/FreeRTOS_SAMD21.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/portmacro.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/portable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src/list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/examples/CompilerAndLinker_Test/GameData.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/examples/CompilerAndLinker_Test/GameMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/examples/CompilerAndLinker_Test/GameThing.h"
)

target_include_directories(freertos_samd21 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-FreeRTOS-SAMD21/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(freertos_samd21 INTERFACE
    arduino-compat
)
