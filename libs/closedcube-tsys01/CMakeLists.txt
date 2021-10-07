add_library(pac-closedcube-tsys01 INTERFACE)

target_sources(pac-closedcube-tsys01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TSYS01_Arduino/src/ClosedCube_TSYS01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TSYS01_Arduino/src/ClosedCube_TSYS01.h"
)

target_include_directories(pac-closedcube-tsys01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TSYS01_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-tsys01 INTERFACE
    arduino-compat
)
