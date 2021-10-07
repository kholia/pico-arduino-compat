add_library(pac-closedcube-opt3001 INTERFACE)

target_sources(pac-closedcube-opt3001 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_OPT3001_Arduino/src/ClosedCube_OPT3001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_OPT3001_Arduino/src/ClosedCube_OPT3001.h"
)

target_include_directories(pac-closedcube-opt3001 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_OPT3001_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-opt3001 INTERFACE
    arduino-compat
)
