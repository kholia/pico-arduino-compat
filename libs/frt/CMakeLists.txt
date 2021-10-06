add_library(frt INTERFACE)

target_sources(frt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/frt/src/frt.h"
)

target_include_directories(frt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/frt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(frt INTERFACE
    arduino-compat
)
