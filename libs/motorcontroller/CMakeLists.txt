add_library(motorcontroller INTERFACE)

target_sources(motorcontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MotorController/src/MotorController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MotorController/src/MotorController.h"
)

target_include_directories(motorcontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MotorController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(motorcontroller INTERFACE
    arduino-compat
)
