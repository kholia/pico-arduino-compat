add_library(homecontrol-mqtt INTERFACE)

target_sources(homecontrol-mqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/examples_rpi_pc/rpi/advanced_MultiOnOff_rpi/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/examples_rpi_pc/rpi/advanced_MultiLevel_PWM_rpi/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/examples_rpi_pc/pc/basic_OnOff_virtual/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/examples_rpi_pc/pc/basic_CpuTemp/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/HomeControlMagic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/printWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/helperFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoEsp32Wrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoEsp8266Wrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoEthernetWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointThermostat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointTemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointIdentify.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointLevel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointOnOff.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointMotion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/programs/example1/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/programs/example3/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/programs/example2/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/src/mqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/src/LinuxWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/lib/logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/src/mqtt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/wrappers/linuxWrapper/src/LinuxWrapper.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/helperFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/HomeControlMagic.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/debugDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/printWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoEsp8266Wrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoNetworkInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoEsp32Wrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoEthernetWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoDebugLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/arduinoWrapper/ArduinoWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointThermostat.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointZero.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointOnOff.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointColor.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointTemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointIdentify.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointLevel.h"
  "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src/Endpoints/EndpointMotion.h"
)

target_include_directories(homecontrol-mqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/homecontrol-mqtt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(homecontrol-mqtt INTERFACE
    arduino-compat
)
