add_library(wiredata INTERFACE)

target_sources(wiredata INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireData/WireData.h"
)

target_include_directories(wiredata INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireData"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wiredata INTERFACE
    arduino-compat
)
