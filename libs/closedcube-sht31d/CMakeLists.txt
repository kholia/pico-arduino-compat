add_library(pac-closedcube-sht31d INTERFACE)

target_sources(pac-closedcube-sht31d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHT31D_Arduino/src/ClosedCube_SHT31D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHT31D_Arduino/src/ClosedCube_SHT31D.h"
)

target_include_directories(pac-closedcube-sht31d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHT31D_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-sht31d INTERFACE
    arduino-compat
)
