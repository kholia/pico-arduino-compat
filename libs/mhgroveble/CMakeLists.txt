add_library(mhgroveble INTERFACE)

target_sources(mhgroveble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MHGroveBLE/src/MHGroveBLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MHGroveBLE/src/MHGroveBLE.h"
)

target_include_directories(mhgroveble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MHGroveBLE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mhgroveble INTERFACE
    arduino-compat
)
