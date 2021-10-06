add_library(dynamixel_servo INTERFACE)

target_sources(dynamixel_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel_Servo/src/Dynamixel_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel_Servo/src/Dynamixel_Servo.h"
)

target_include_directories(dynamixel_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dynamixel_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dynamixel_servo INTERFACE
    arduino-compat
)
