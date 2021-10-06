add_library(uptime-library INTERFACE)

target_sources(uptime-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime_formatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime_formatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime.h"
)

target_include_directories(uptime-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uptime-library INTERFACE
    arduino-compat
)
