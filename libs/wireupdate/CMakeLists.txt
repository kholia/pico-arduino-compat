add_library(wireupdate INTERFACE)

target_sources(wireupdate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireUpdate/src/WireUpdate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WireUpdate/src/WireUpdate.h"
)

target_include_directories(wireupdate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireUpdate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(wireupdate INTERFACE
    arduino-compat
    official-sd
)
