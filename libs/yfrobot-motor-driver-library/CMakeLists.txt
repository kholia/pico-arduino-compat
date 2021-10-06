add_library(yfrobot-motor-driver-library INTERFACE)

target_sources(yfrobot-motor-driver-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Yfrobot-Motor-Driver-Library/src/MotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Yfrobot-Motor-Driver-Library/src/MotorDriverIIC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Yfrobot-Motor-Driver-Library/src/MotorDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Yfrobot-Motor-Driver-Library/src/MotorDriverPin.h"
)

target_include_directories(yfrobot-motor-driver-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Yfrobot-Motor-Driver-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(yfrobot-motor-driver-library INTERFACE
    arduino-compat
)
