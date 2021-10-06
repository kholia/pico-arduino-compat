add_library(grove-motor-driver-tb6612fng INTERFACE)

target_sources(grove-motor-driver-tb6612fng INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Motor_Driver_TB6612FNG/I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Motor_Driver_TB6612FNG/Grove_Motor_Driver_TB6612FNG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Motor_Driver_TB6612FNG/Grove_Motor_Driver_TB6612FNG.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Motor_Driver_TB6612FNG/I2Cdev.h"
)

target_include_directories(grove-motor-driver-tb6612fng INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Motor_Driver_TB6612FNG"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-motor-driver-tb6612fng INTERFACE
    arduino-compat
)
