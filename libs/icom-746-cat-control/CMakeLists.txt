add_library(pac-icom-746-cat-control INTERFACE)

target_sources(pac-icom-746-cat-control INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IC746CAT/IC746.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IC746CAT/IC746.h"
)

target_include_directories(pac-icom-746-cat-control INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IC746CAT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-icom-746-cat-control INTERFACE
    arduino-compat
)
