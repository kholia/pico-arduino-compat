add_library(pac-frt INTERFACE)

target_sources(pac-frt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/frt/src/frt.h"
)

target_include_directories(pac-frt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/frt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-frt INTERFACE
    arduino-compat
)
