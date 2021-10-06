add_library(onesystemlibrary INTERFACE)

target_sources(onesystemlibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Gripper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Move.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/DeltaRobotOne.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/DisplayI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Light.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/WorkingSpace.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/ExtMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Protocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Remote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Power.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/LiveMode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Functions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Screen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/ServoSetup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Motion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Menu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Remote.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/DeltaRobotOne.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/DisplayI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Gripper.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Motion.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Light.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Signs.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Power.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Menu.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/ExtMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Screen.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/LiveMode.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/ServoSetup.h"
  "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src/Move.h"
)

target_include_directories(onesystemlibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/one_system_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(onesystemlibrary INTERFACE
    arduino-compat
)
