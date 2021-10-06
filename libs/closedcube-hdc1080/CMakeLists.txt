add_library(closedcube-hdc1080 INTERFACE)

target_sources(closedcube-hdc1080 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_HDC1080_Arduino/src/ClosedCube_HDC1080.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_HDC1080_Arduino/src/ClosedCube_HDC1080.h"
)

target_include_directories(closedcube-hdc1080 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_HDC1080_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(closedcube-hdc1080 INTERFACE
    arduino-compat
)
