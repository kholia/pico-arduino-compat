add_library(pac-dump INTERFACE)

target_sources(pac-dump INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dump/src/Dump.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dump/src/Dump.h"
)

target_include_directories(pac-dump INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dump/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dump INTERFACE
    arduino-compat
)
