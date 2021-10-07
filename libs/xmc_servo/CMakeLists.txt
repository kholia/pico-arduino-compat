add_library(pac-xmc_servo INTERFACE)

target_sources(pac-xmc_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XMC_Servo/src/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XMC_Servo/src/Servo.h"
)

target_include_directories(pac-xmc_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XMC_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xmc_servo INTERFACE
    arduino-compat
)
