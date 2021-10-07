add_library(pac-md_msgeq7 INTERFACE)

target_sources(pac-md_msgeq7 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_MSGEQ7/src/MD_MSGEQ7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_MSGEQ7/src/MD_MSGEQ7.h"
)

target_include_directories(pac-md_msgeq7 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_MSGEQ7/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_msgeq7 INTERFACE
    arduino-compat
)
