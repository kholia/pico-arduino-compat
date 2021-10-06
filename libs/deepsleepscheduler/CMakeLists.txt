add_library(deepsleepscheduler INTERFACE)

target_sources(deepsleepscheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DeepSleepScheduler/DeepSleepScheduler_esp_definition.h"
  "${CMAKE_CURRENT_LIST_DIR}/DeepSleepScheduler/DeepSleepScheduler_esp_implementation.h"
  "${CMAKE_CURRENT_LIST_DIR}/DeepSleepScheduler/DeepSleepScheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/DeepSleepScheduler/DeepSleepScheduler_avr_definition.h"
  "${CMAKE_CURRENT_LIST_DIR}/DeepSleepScheduler/DeepSleepScheduler_avr_implementation.h"
  "${CMAKE_CURRENT_LIST_DIR}/DeepSleepScheduler/DeepSleepScheduler_esp_includes.h"
)

target_include_directories(deepsleepscheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DeepSleepScheduler"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(deepsleepscheduler INTERFACE
    arduino-compat
)
