add_library(home-assistant-integration INTERFACE)

target_sources(home-assistant-integration INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/HAMqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/HAUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/HADevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HAFan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HATriggers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HASensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HASwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HAHVAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HABinarySensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/BaseDeviceType.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/DeviceTypeSerializer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HACover.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HATagScanner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/ArduinoHA.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/HAUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/HADevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/HAMqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/ArduinoHADefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/BaseDeviceType.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HATriggers.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/DeviceTypeSerializer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HAHVAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HABinarySensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HATagScanner.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HASwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HACover.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HASensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src/device-types/HAFan.h"
)

target_include_directories(home-assistant-integration INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-home-assistant/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(home-assistant-integration INTERFACE
    arduino-compat
)
