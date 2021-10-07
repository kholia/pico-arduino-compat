add_library(pac-closedcube-tca9548a INTERFACE)

target_sources(pac-closedcube-tca9548a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9548A_Arduino/src/ClosedCube_TCA9548A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9548A_Arduino/src/ClosedCube_TCA9548A.h"
)

target_include_directories(pac-closedcube-tca9548a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9548A_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-tca9548a INTERFACE
    arduino-compat
)
