add_library(pac-md_ad9833 INTERFACE)

target_sources(pac-md_ad9833 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_AD9833/src/MD_AD9833.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_AD9833/src/MD_AD9833_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_AD9833/src/MD_AD9833.h"
)

target_include_directories(pac-md_ad9833 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_AD9833/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_ad9833 INTERFACE
    arduino-compat
)
