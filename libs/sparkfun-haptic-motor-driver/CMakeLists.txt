add_library(pac-sparkfun-haptic-motor-driver INTERFACE)

target_sources(pac-sparkfun-haptic-motor-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Haptic_Motor_Driver_Arduino_Library/src/SparkFun_DRV2605L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Haptic_Motor_Driver_Arduino_Library/src/Sparkfun_DRV2605L.h"
)

target_include_directories(pac-sparkfun-haptic-motor-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Haptic_Motor_Driver_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-haptic-motor-driver INTERFACE
    arduino-compat
)
