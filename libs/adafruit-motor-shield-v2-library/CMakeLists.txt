add_library(adafruit-motor-shield-v2-library INTERFACE)

target_sources(adafruit-motor-shield-v2-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Motor_Shield_V2_Library/Adafruit_MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Motor_Shield_V2_Library/utility/Adafruit_MS_PWMServoDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Motor_Shield_V2_Library/Adafruit_MotorShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Motor_Shield_V2_Library/utility/Adafruit_MS_PWMServoDriver.h"
)

target_include_directories(adafruit-motor-shield-v2-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Motor_Shield_V2_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-motor-shield-v2-library INTERFACE
    arduino-compat
    adafruit-busio
)
