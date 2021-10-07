add_library(pac-smallsetup INTERFACE)

target_sources(pac-smallsetup INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmallSetup/SmallSetup.h"
)

target_include_directories(pac-smallsetup INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmallSetup"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smallsetup INTERFACE
    arduino-compat
)
