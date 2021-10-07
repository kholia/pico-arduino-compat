add_library(pac-lewis INTERFACE)

target_sources(pac-lewis INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lewis/src/Lewis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lewis/src/Lewis.h"
)

target_include_directories(pac-lewis INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lewis/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lewis INTERFACE
    arduino-compat
)
