add_library(mb85_fram INTERFACE)

target_sources(mb85_fram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MB85_FRAM/src/MB85_FRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MB85_FRAM/src/MB85_FRAM.h"
)

target_include_directories(mb85_fram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MB85_FRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mb85_fram INTERFACE
    arduino-compat
)
