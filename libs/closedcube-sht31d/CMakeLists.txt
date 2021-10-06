add_library(closedcube-sht31d INTERFACE)

target_sources(closedcube-sht31d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHT31D_Arduino/src/ClosedCube_SHT31D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHT31D_Arduino/src/ClosedCube_SHT31D.h"
)

target_include_directories(closedcube-sht31d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_SHT31D_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(closedcube-sht31d INTERFACE
    arduino-compat
)
