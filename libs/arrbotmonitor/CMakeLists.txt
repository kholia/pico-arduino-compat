add_library(pac-arrbotmonitor INTERFACE)

target_sources(pac-arrbotmonitor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArrbotMonitor/src/ArrbotMonitor.h"
)

target_include_directories(pac-arrbotmonitor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArrbotMonitor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arrbotmonitor INTERFACE
    arduino-compat
)
