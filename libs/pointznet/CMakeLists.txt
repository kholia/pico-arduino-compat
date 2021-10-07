add_library(pac-pointznet INTERFACE)

target_sources(pac-pointznet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PointzNet/src/PointzNet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PointzNet/src/PointzNet.h"
)

target_include_directories(pac-pointznet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PointzNet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pointznet INTERFACE
    arduino-compat
)
