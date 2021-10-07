add_library(pac-cytron-servo-shield INTERFACE)

target_sources(pac-cytron-servo-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_Servo_Shield_Library/src/CytronServoShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_Servo_Shield_Library/src/CytronServoShield.h"
)

target_include_directories(pac-cytron-servo-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cytron_Servo_Shield_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cytron-servo-shield INTERFACE
    arduino-compat
)
