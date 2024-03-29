add_library(pac-temboo INTERFACE)

target_sources(pac-temboo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooMQTTEdgeDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooMonitoring.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooSSL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/Temboo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooCoAPEdgeDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputSet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoPreset.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooCoAPSession.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoOutputFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoSensorInputFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoSensorInputSet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoPresetFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/CoapMsg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/CoapRRLayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoSensorInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooMQTTSession.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoOutputSet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/tmbmd5.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputExpressionSet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoDeviceFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooDS18B20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/CoapMessageLayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/tmbhmac.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooOneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooSession.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/BaseFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputExpression.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputExpressionFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/DataFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTUnsubscribeClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTFormat.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooGlobal.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTSubscribeServer.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTConnectServer.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTPacket.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTUnsubscribeServer.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooWebSocketRequestHandles.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTConnectClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTSerializePublish.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTDeserializePublish.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTSubscribeClient.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooGPIO.c"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooCoAPEdgeDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooSSL.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooMonitoring.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooMQTTEdgeDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/TembooYunShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/Temboo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoSensorInputFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoPreset.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/StackTrace.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoSensorInputSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/CoapMsg.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooSession.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTSubscribe.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputExpressionFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooMQTTSession.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoSensorInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooGlobal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/FP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/tmbmd5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoPresetFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTFormat.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTUnsubscribe.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooOneWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoOutputFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooWebSocketRequestHandles.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoDeviceFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputExpressionSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooCoAPIPStack.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooMQTTIPStack.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoOutputSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTPublish.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ArduinoTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooTags.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/CoapMessageLayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooCoAPSession.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/tmbhmac.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/DataFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTLogging.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooDS18B20.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/BaseFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTPacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/TembooGPIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputExpression.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/ChoreoInputFormatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/CoapRRLayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/src/utility/MQTTConnect.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/ToxicFacilitiesSearch/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/UpdateFacebookStatus/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/GetYahooWeatherReport/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/SendAnSMS/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/ReadATweet/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/SendDataToGoogleSpreadsheet/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/SendATweet/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/SendAnEmail/TembooAccount.h"
  "${CMAKE_CURRENT_LIST_DIR}/Temboo/examples/ArduinoYun/UploadToDropbox/TembooAccount.h"
)

target_include_directories(pac-temboo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Temboo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-temboo INTERFACE
    arduino-compat
)
