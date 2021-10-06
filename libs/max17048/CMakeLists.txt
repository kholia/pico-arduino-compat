add_library(max17048 INTERFACE)

target_sources(max17048 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX17048/MAX17048.h"
)

target_include_directories(max17048 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX17048"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max17048 INTERFACE
    arduino-compat
)
