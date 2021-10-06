add_library(cytron-servo-shield INTERFACE)

target_sources(cytron-servo-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_Servo_Shield_Library/src/CytronServoShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_Servo_Shield_Library/src/CytronServoShield.h"
)

target_include_directories(cytron-servo-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cytron_Servo_Shield_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cytron-servo-shield INTERFACE
    arduino-compat
)
