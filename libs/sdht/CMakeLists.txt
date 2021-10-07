add_library(pac-sdht INTERFACE)

target_sources(pac-sdht INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDHT/SDHT.h"
)

target_include_directories(pac-sdht INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDHT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sdht INTERFACE
    arduino-compat
)
