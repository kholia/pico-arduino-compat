add_library(pointznet INTERFACE)

target_sources(pointznet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PointzNet/src/PointzNet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PointzNet/src/PointzNet.h"
)

target_include_directories(pointznet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PointzNet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pointznet INTERFACE
    arduino-compat
)
