add_library(myalarm INTERFACE)

target_sources(myalarm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MyAlarm/src/MyAlarm.h"
)

target_include_directories(myalarm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MyAlarm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(myalarm INTERFACE
    arduino-compat
)
