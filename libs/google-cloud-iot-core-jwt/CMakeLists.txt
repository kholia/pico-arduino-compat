add_library(google-cloud-iot-core-jwt INTERFACE)

target_sources(google-cloud-iot-core-jwt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/CloudIoTCoreMqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/CloudIoTCoreDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/jwt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/prng.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/ecdsa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/nn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/sha256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/ecc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/secp256r1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/CloudIoTCoreDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/CloudIoTCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/CloudIoTCoreMqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/jwt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/ecc.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/prng.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/nn.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/sha256.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src/crypto/ecdsa.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/MKR1000-lwmqtt/mkr1000-mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/MKR1000-lwmqtt/ciotc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/universal-lwmqtt/ciotc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/universal-lwmqtt/universal-mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/Esp8266-lwmqtt/esp8266_mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/Esp8266-lwmqtt/ciotc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/complex/esp32/camera/esp32-mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/complex/esp32/camera/ciotc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/complex/esp32/camera/base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/complex/esp32/Gateway/Esp32-gateway/connect-serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/complex/esp32/Gateway/Esp32-gateway/esp32-mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/complex/esp32/Gateway/Esp32-gateway/ciotc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/Esp32-lwmqtt/esp32-mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/examples/Esp32-lwmqtt/ciotc_config.h"
)

target_include_directories(google-cloud-iot-core-jwt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/google-cloud-iot-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(google-cloud-iot-core-jwt INTERFACE
    arduino-compat
)
