add_library(vrpc INTERFACE)

target_sources(vrpc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-vrpc/src/notstd.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-vrpc/vrpc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-vrpc/src/vrpc.h"
)

target_include_directories(vrpc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-vrpc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vrpc INTERFACE
    arduino-compat
)
