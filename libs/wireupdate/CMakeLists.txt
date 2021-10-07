add_library(pac-wireupdate INTERFACE)

target_sources(pac-wireupdate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireUpdate/src/WireUpdate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WireUpdate/src/WireUpdate.h"
)

target_include_directories(pac-wireupdate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireUpdate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-wireupdate INTERFACE
    arduino-compat
    pac-sd
)
