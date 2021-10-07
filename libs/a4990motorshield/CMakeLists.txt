add_library(pac-a4990motorshield INTERFACE)

target_sources(pac-a4990motorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/a4990-motor-shield/A4990MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/a4990-motor-shield/A4990MotorShield.h"
)

target_include_directories(pac-a4990motorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/a4990-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-a4990motorshield INTERFACE
    arduino-compat
)
