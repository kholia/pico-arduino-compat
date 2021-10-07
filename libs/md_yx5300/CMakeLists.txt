add_library(pac-md_yx5300 INTERFACE)

target_sources(pac-md_yx5300 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_YX5300/src/MD_YX5300.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_YX5300/src/MD_YX5300.h"
)

target_include_directories(pac-md_yx5300 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_YX5300/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_yx5300 INTERFACE
    arduino-compat
)
