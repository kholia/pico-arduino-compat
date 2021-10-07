add_library(pac-utilities INTERFACE)

target_sources(pac-utilities INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Utilities/src/Utilities.h"
)

target_include_directories(pac-utilities INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Utilities/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-utilities INTERFACE
    arduino-compat
)
