add_library(pac-unixtime INTERFACE)

target_sources(pac-unixtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UnixTime/src/UnixTime.h"
)

target_include_directories(pac-unixtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UnixTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-unixtime INTERFACE
    arduino-compat
)
