add_library(pac-sparkfun-qwiic-haptic-driver-da7280-library INTERFACE)

target_sources(pac-sparkfun-qwiic-haptic-driver-da7280-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Haptic_Driver_DA7280_Arduino_Library/src/Haptic_Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Haptic_Driver_DA7280_Arduino_Library/src/Haptic_Driver.h"
)

target_include_directories(pac-sparkfun-qwiic-haptic-driver-da7280-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Haptic_Driver_DA7280_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-haptic-driver-da7280-library INTERFACE
    arduino-compat
)
