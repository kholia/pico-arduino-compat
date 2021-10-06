add_library(steambot INTERFACE)

target_sources(steambot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STEAMbot/src/STEAMbot.h"
)

target_include_directories(steambot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STEAMbot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(steambot INTERFACE
    arduino-compat
)
