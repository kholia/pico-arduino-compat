add_library(mstask INTERFACE)

target_sources(mstask INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/msTask/src/msTask.h"
)

target_include_directories(mstask INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/msTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mstask INTERFACE
    arduino-compat
)
