add_library(pac-closedcube-shtc3 INTERFACE)

target_sources(pac-closedcube-shtc3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHTC3_Arduino/src/ClosedCube_SHTC3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHTC3_Arduino/src/ClosedCube_SHTC3.h"
)

target_include_directories(pac-closedcube-shtc3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHTC3_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-shtc3 INTERFACE
    arduino-compat
)
