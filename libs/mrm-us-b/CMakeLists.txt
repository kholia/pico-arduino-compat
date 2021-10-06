add_library(mrm-us-b INTERFACE)

target_sources(mrm-us-b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-us-b/src/mrm-us-b.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-us-b/src/mrm-us-b.h"
)

target_include_directories(mrm-us-b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-us-b/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-us-b INTERFACE
    arduino-compat
)
