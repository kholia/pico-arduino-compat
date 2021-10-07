add_library(pac-spacebrewyun INTERFACE)

target_sources(pac-spacebrewyun INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpacebrewYun/src/SpacebrewYun.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SpacebrewYun/src/SpacebrewYun.h"
)

target_include_directories(pac-spacebrewyun INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpacebrewYun/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spacebrewyun INTERFACE
    arduino-compat
)
