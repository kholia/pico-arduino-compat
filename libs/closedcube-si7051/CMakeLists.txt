add_library(pac-closedcube-si7051 INTERFACE)

target_sources(pac-closedcube-si7051 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_Si7051_Arduino/src/ClosedCube_Si7051.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_Si7051_Arduino/src/ClosedCube_Si7051.h"
)

target_include_directories(pac-closedcube-si7051 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_Si7051_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-si7051 INTERFACE
    arduino-compat
)
