add_library(pac-rbd_servo INTERFACE)

target_sources(pac-rbd_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Servo/src/RBD_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Servo/src/RBD_Servo.h"
)

target_include_directories(pac-rbd_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_servo INTERFACE
    arduino-compat
)
