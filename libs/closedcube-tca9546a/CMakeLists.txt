add_library(closedcube-tca9546a INTERFACE)

target_sources(closedcube-tca9546a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9546A_Arduino/src/ClosedCube_TCA9546A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9546A_Arduino/src/ClosedCube_TCA9546A.h"
)

target_include_directories(closedcube-tca9546a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_TCA9546A_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(closedcube-tca9546a INTERFACE
    arduino-compat
)
