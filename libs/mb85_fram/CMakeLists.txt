add_library(pac-mb85_fram INTERFACE)

target_sources(pac-mb85_fram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MB85_FRAM/src/MB85_FRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MB85_FRAM/src/MB85_FRAM.h"
)

target_include_directories(pac-mb85_fram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MB85_FRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mb85_fram INTERFACE
    arduino-compat
)
