add_library(pac-sparkfun-quadstepper-motor-driver INTERFACE)

target_sources(pac-sparkfun-quadstepper-motor-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Quadstepper_Motor_Driver_Arduino_Library/src/SparkFunQuadstep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Quadstepper_Motor_Driver_Arduino_Library/src/SparkFunQuadstep.h"
)

target_include_directories(pac-sparkfun-quadstepper-motor-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Quadstepper_Motor_Driver_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-quadstepper-motor-driver INTERFACE
    arduino-compat
)
