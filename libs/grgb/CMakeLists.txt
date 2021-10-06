add_library(grgb INTERFACE)

target_sources(grgb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GRGB/src/GRGB.h"
)

target_include_directories(grgb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GRGB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grgb INTERFACE
    arduino-compat
)
