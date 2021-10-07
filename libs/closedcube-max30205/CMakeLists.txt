add_library(pac-closedcube-max30205 INTERFACE)

target_sources(pac-closedcube-max30205 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_MAX30205_Arduino/src/ClosedCube_MAX30205.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_MAX30205_Arduino/src/ClosedCube_MAX30205.h"
)

target_include_directories(pac-closedcube-max30205 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_MAX30205_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-max30205 INTERFACE
    arduino-compat
)
