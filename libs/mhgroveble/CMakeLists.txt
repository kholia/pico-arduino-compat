add_library(pac-mhgroveble INTERFACE)

target_sources(pac-mhgroveble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MHGroveBLE/src/MHGroveBLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MHGroveBLE/src/MHGroveBLE.h"
)

target_include_directories(pac-mhgroveble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MHGroveBLE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mhgroveble INTERFACE
    arduino-compat
)
