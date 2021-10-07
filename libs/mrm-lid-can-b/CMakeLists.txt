add_library(pac-mrm-lid-can-b INTERFACE)

target_sources(pac-mrm-lid-can-b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b/src/mrm-lid-can-b.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b/src/mrm-lid-can-b.h"
)

target_include_directories(pac-mrm-lid-can-b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-lid-can-b/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-lid-can-b INTERFACE
    arduino-compat
)
