add_library(pac-uptime-library INTERFACE)

target_sources(pac-uptime-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime_formatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime_formatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src/uptime.h"
)

target_include_directories(pac-uptime-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Uptime-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-uptime-library INTERFACE
    arduino-compat
)
