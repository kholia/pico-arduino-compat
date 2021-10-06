add_library(arrbotmonitor INTERFACE)

target_sources(arrbotmonitor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArrbotMonitor/src/ArrbotMonitor.h"
)

target_include_directories(arrbotmonitor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArrbotMonitor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arrbotmonitor INTERFACE
    arduino-compat
)
