add_library(unixtime INTERFACE)

target_sources(unixtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UnixTime/src/UnixTime.h"
)

target_include_directories(unixtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UnixTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(unixtime INTERFACE
    arduino-compat
)
