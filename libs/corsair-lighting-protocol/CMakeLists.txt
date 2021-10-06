add_library(corsair-lighting-protocol INTERFACE)

target_sources(corsair-lighting-protocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/LEDController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CLPAdditionalFeatures.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/FastLEDController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/RawHID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CLPUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingFirmware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/TemperatureController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/FanController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/FastLEDControllerUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolHID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/HoodLoader2CLPBridge/CLPUSBSerialBridge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/CommanderPRO/ThermistorTemperatureController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/CommanderPRO/PWMFan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/CommanderPRO/SimpleFanController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CLPUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/FanController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/ITemperatureController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolResponse.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/RawHID.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/TemperatureController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/FastLEDControllerUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/ILEDController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/LEDController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingFirmware.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CLPAdditionalFeatures.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolHID.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/IFanController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/CorsairLightingProtocolController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src/FastLEDController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/HoodLoader2CLPBridge/CLPUSBSerialBridge.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/CommanderPRO/ThermistorTemperatureController.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/CommanderPRO/PWMFan.h"
  "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/examples/CommanderPRO/SimpleFanController.h"
)

target_include_directories(corsair-lighting-protocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CorsairLightingProtocol/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(corsair-lighting-protocol INTERFACE
    arduino-compat
)
