add_library(pac-mstring INTERFACE)

target_sources(pac-mstring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mString/src/mString.h"
)

target_include_directories(pac-mstring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mString/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mstring INTERFACE
    arduino-compat
)
