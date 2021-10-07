add_library(pac-closedcube-tca9538 INTERFACE)

target_sources(pac-closedcube-tca9538 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9538_Arduino/src/ClosedCube_TCA9538.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9538_Arduino/src/ClosedCube_TCA9538.h"
)

target_include_directories(pac-closedcube-tca9538 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9538_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-tca9538 INTERFACE
    arduino-compat
)
