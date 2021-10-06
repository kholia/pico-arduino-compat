add_library(spacebrewyun INTERFACE)

target_sources(spacebrewyun INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpacebrewYun/src/SpacebrewYun.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SpacebrewYun/src/SpacebrewYun.h"
)

target_include_directories(spacebrewyun INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpacebrewYun/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spacebrewyun INTERFACE
    arduino-compat
)
