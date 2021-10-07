add_library(pac-beacon INTERFACE)

target_sources(pac-beacon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ABeacon/src/Beacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ABeacon/src/Beacon.h"
)

target_include_directories(pac-beacon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ABeacon/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-beacon INTERFACE
    arduino-compat
)
