add_library(mstring INTERFACE)

target_sources(mstring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mString/src/mString.h"
)

target_include_directories(mstring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mString/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mstring INTERFACE
    arduino-compat
)
