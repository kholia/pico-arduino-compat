add_library(pac-mstask INTERFACE)

target_sources(pac-mstask INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/msTask/src/msTask.h"
)

target_include_directories(pac-mstask INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/msTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mstask INTERFACE
    arduino-compat
)
