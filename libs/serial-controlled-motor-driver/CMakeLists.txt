add_library(pac-serial-controlled-motor-driver INTERFACE)

target_sources(pac-serial-controlled-motor-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Serial_Controlled_Motor_Driver_Arduino_Library/src/SCMD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Serial_Controlled_Motor_Driver_Arduino_Library/src/SCMD.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Serial_Controlled_Motor_Driver_Arduino_Library/src/SCMD_config.h"
)

target_include_directories(pac-serial-controlled-motor-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Serial_Controlled_Motor_Driver_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serial-controlled-motor-driver INTERFACE
    arduino-compat
)
