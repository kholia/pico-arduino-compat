add_library(mrm-col-b INTERFACE)

target_sources(mrm-col-b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-col-b/src/mrm-col-b.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-col-b/src/mrm-col-b.h"
)

target_include_directories(mrm-col-b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-col-b/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-col-b INTERFACE
    arduino-compat
)
