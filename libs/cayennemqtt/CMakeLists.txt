add_library(pac-cayennemqtt INTERFACE)

target_sources(pac-cayennemqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneHandlers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/Platform/Arduino/MQTTArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTClient/CayenneMQTTClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTClient/MQTTClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTUnsubscribeClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTPacket.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTConnectClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTSerializePublish.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTDeserializePublish.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTSubscribeClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneUtils/CayenneDataArray.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneUtils/CayenneUtils.c"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTSerialClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneHandlers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTWiFiNINA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneVCNL4000.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTESP8266Shield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTMKR1010.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTUnoWifiRev2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneTemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneArduinoDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTYunClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneTMP102.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/DetectDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTEthernetW5200.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTWiFi101.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTWiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTYun.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTGSMClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneArduinoMQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTMKR1000.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTEthernetClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTEthernetW5500.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTGSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTClient/PlatformHeader.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTClient/MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneMQTTClient/CayenneMQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTSubscribe.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTUnsubscribe.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTPublish.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTPacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/MQTTCommon/MQTTConnect.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneUtils/CayenneTopics.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneUtils/CayenneDataArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneUtils/CayenneTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneUtils/CayenneDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/CayenneUtils/CayenneUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src/Platform/Arduino/MQTTArduino.h"
)

target_include_directories(pac-cayennemqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cayenne-MQTT-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cayennemqtt INTERFACE
    arduino-compat
)
