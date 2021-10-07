add_library(pac-esp8266scheduler INTERFACE)

target_sources(pac-esp8266scheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src/Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src/Scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src/Task.h"
)

target_include_directories(pac-esp8266scheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266Scheduler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266scheduler INTERFACE
    arduino-compat
)
