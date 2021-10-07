add_library(pac-pwmservo INTERFACE)

target_sources(pac-pwmservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWMServo/PWMServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMServo/PWMServo.h"
)

target_include_directories(pac-pwmservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWMServo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pwmservo INTERFACE
    arduino-compat
)
