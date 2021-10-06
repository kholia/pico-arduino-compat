add_library(eewl INTERFACE)

target_sources(eewl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEWL/src/eewl.h"
)

target_include_directories(eewl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEWL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eewl INTERFACE
    arduino-compat
)
