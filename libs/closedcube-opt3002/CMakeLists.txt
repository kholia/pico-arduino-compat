add_library(pac-closedcube-opt3002 INTERFACE)

target_sources(pac-closedcube-opt3002 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_OPT3002_Arduino/src/ClosedCube_OPT3002.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_OPT3002_Arduino/src/ClosedCube_OPT3002.h"
)

target_include_directories(pac-closedcube-opt3002 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_OPT3002_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-opt3002 INTERFACE
    arduino-compat
)
