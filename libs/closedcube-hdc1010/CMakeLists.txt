add_library(pac-closedcube-hdc1010 INTERFACE)

target_sources(pac-closedcube-hdc1010 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_HDC1010_Arduino/src/ClosedCube_HDC1010.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_HDC1010_Arduino/src/ClosedCube_HDC1010.h"
)

target_include_directories(pac-closedcube-hdc1010 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_HDC1010_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-hdc1010 INTERFACE
    arduino-compat
)
