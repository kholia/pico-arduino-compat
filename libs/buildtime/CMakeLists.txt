add_library(buildtime INTERFACE)

target_sources(buildtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/buildTime/src/buildTime.h"
)

target_include_directories(buildtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/buildTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(buildtime INTERFACE
    arduino-compat
)
