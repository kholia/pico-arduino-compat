add_library(beacon INTERFACE)

target_sources(beacon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ABeacon/src/Beacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ABeacon/src/Beacon.h"
)

target_include_directories(beacon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ABeacon/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(beacon INTERFACE
    arduino-compat
)
