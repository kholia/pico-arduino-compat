add_library(pac-pcd8544 INTERFACE)

target_sources(pac-pcd8544 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pcd8544/PCD8544.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pcd8544/charset.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pcd8544/PCD8544.h"
)

target_include_directories(pac-pcd8544 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pcd8544"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pcd8544 INTERFACE
    arduino-compat
)
