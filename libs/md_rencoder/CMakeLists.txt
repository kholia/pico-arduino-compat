add_library(md_rencoder INTERFACE)

target_sources(md_rencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_REncoder/src/MD_REncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_REncoder/src/MD_REncoder.h"
)

target_include_directories(md_rencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_REncoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_rencoder INTERFACE
    arduino-compat
)
