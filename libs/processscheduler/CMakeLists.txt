add_library(pac-processscheduler INTERFACE)

target_sources(pac-processscheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src/ProcessScheduler/Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src/ProcessScheduler/Process.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src/ProcessScheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src/ProcessScheduler/Scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src/ProcessScheduler/Includes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src/ProcessScheduler/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src/ProcessScheduler/Process.h"
)

target_include_directories(pac-processscheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoProcessScheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-processscheduler INTERFACE
    arduino-compat
)
