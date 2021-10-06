add_library(weeklyalarm INTERFACE)

target_sources(weeklyalarm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/weeklyAlarm/src/WeeklyAlarm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/weeklyAlarm/src/WeeklyAlarm.h"
)

target_include_directories(weeklyalarm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/weeklyAlarm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(weeklyalarm INTERFACE
    arduino-compat
)
