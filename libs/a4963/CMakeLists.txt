add_library(pac-a4963 INTERFACE)

target_sources(pac-a4963 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/A4963/src/A4963_config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/A4963/src/A4963.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/A4963/src/A4963_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/A4963/src/A4963_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/A4963/src/A4963.h"
)

target_include_directories(pac-a4963 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/A4963/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-a4963 INTERFACE
    arduino-compat
)
