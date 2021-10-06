add_library(mrm-lid-can-b INTERFACE)

target_sources(mrm-lid-can-b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b/src/mrm-lid-can-b.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b/src/mrm-lid-can-b.h"
)

target_include_directories(mrm-lid-can-b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-lid-can-b INTERFACE
    arduino-compat
)
