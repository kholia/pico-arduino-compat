add_library(md_smartcar INTERFACE)

target_sources(md_smartcar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/SC_PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/MD_SmartCar_Misc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/MD_SmartCar_Config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/MD_SmartCar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/SC_MotorEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/SC_DCMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/SC_DCMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/SC_MotorEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/SC_HardwareDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/SC_PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src/MD_SmartCar.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/examples/MD_SmartCar_Setup_Control/SmartCar_HW.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/examples/MD_SmartCar_Joystick/SmartCar_HW.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/examples/MD_SmartCar_Calibrate/SmartCar_HW.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/examples/MD_SmartCar_Rover/SmartCar_Sensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/examples/MD_SmartCar_Rover/SmartCar_HW.h"
)

target_include_directories(md_smartcar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_SmartCar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_smartcar INTERFACE
    arduino-compat
)
