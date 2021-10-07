add_library(pac-cronalarms INTERFACE)

target_sources(pac-cronalarms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CronAlarms/src/CronAlarms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CronAlarms/src/ccronexpr/ccronexpr.c"
  "${CMAKE_CURRENT_LIST_DIR}/CronAlarms/src/CronAlarms.h"
  "${CMAKE_CURRENT_LIST_DIR}/CronAlarms/src/ccronexpr/ccronexpr.h"
)

target_include_directories(pac-cronalarms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CronAlarms/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cronalarms INTERFACE
    arduino-compat
)
