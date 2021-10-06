add_library(pwmservo INTERFACE)

target_sources(pwmservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWMServo/PWMServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMServo/PWMServo.h"
)

target_include_directories(pwmservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWMServo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pwmservo INTERFACE
    arduino-compat
)
