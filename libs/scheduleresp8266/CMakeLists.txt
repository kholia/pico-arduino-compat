add_library(pac-scheduleresp8266 INTERFACE)

target_sources(pac-scheduleresp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SchedulerESP8266/ScheduleTaskESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SchedulerESP8266/SchedulerESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SchedulerESP8266/ScheduleTaskESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/SchedulerESP8266/SchedulerESP8266.h"
)

target_include_directories(pac-scheduleresp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SchedulerESP8266"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-scheduleresp8266 INTERFACE
    arduino-compat
)
