add_library(pac-closedcube-tmp116 INTERFACE)

target_sources(pac-closedcube-tmp116 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TMP116_Arduino/src/ClosedCube_TMP116.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TMP116_Arduino/src/ClosedCube_TMP116.h"
)

target_include_directories(pac-closedcube-tmp116 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TMP116_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-tmp116 INTERFACE
    arduino-compat
)
