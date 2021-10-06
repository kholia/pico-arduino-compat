add_library(lewis INTERFACE)

target_sources(lewis INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lewis/src/Lewis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lewis/src/Lewis.h"
)

target_include_directories(lewis INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lewis/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lewis INTERFACE
    arduino-compat
)
