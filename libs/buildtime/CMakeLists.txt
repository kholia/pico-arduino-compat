add_library(pac-buildtime INTERFACE)

target_sources(pac-buildtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/buildTime/src/buildTime.h"
)

target_include_directories(pac-buildtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/buildTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-buildtime INTERFACE
    arduino-compat
)
