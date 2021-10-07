add_library(pac-dcd-sdk-for-arduino INTERFACE)

target_sources(pac-dcd-sdk-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dcd-sdk-arduino/src/dcd_hub_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dcd-sdk-arduino/src/dcd_hub_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/dcd-sdk-arduino/example/Accelerometer_nano33_dcdHub/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/dcd-sdk-arduino/example/FSR_nano_dcdHub/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/dcd-sdk-arduino/example/Arduino_nano33_MQTT/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/dcd-sdk-arduino/example/GPS_nano33_dcdHub/arduino_secrets.h"
)

target_include_directories(pac-dcd-sdk-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dcd-sdk-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dcd-sdk-for-arduino INTERFACE
    arduino-compat
)
