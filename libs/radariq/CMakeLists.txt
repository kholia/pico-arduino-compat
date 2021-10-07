add_library(pac-radariq INTERFACE)

target_sources(pac-radariq INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RadarIQ.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RadarIQ.h"
)

target_include_directories(pac-radariq INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-radariq INTERFACE
    arduino-compat
)
