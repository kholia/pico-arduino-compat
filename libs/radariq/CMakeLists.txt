add_library(radariq INTERFACE)

target_sources(radariq INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RadarIQ.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RadarIQ.h"
)

target_include_directories(radariq INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(radariq INTERFACE
    arduino-compat
)
