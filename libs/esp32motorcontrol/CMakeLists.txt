add_library(esp32motorcontrol INTERFACE)

target_sources(esp32motorcontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32MotorControl/ESP32MotorControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32MotorControl/ESP32MotorControl.h"
)

target_include_directories(esp32motorcontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32MotorControl"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32motorcontrol INTERFACE
    arduino-compat
)
