add_library(sdht INTERFACE)

target_sources(sdht INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDHT/SDHT.h"
)

target_include_directories(sdht INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDHT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sdht INTERFACE
    arduino-compat
)
