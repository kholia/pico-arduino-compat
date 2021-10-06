add_library(smallsetup INTERFACE)

target_sources(smallsetup INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmallSetup/SmallSetup.h"
)

target_include_directories(smallsetup INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmallSetup"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smallsetup INTERFACE
    arduino-compat
)
