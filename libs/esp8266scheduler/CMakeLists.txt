add_library(esp8266scheduler INTERFACE)

target_sources(esp8266scheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src/Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src/Scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src/Task.h"
)

target_include_directories(esp8266scheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266scheduler INTERFACE
    arduino-compat
)
