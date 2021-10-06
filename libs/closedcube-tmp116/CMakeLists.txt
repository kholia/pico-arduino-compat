add_library(closedcube-tmp116 INTERFACE)

target_sources(closedcube-tmp116 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TMP116_Arduino/src/ClosedCube_TMP116.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TMP116_Arduino/src/ClosedCube_TMP116.h"
)

target_include_directories(closedcube-tmp116 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TMP116_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(closedcube-tmp116 INTERFACE
    arduino-compat
)
