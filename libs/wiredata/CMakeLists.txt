add_library(pac-wiredata INTERFACE)

target_sources(pac-wiredata INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireData/WireData.h"
)

target_include_directories(pac-wiredata INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireData"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wiredata INTERFACE
    arduino-compat
)
