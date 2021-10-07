add_library(pac-liveobjectssdk INTERFACE)

target_sources(pac-liveobjectssdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/Adafruit_MQTT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsMKR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsWiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsFona.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjects.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsCellular.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/MqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/Adafruit_MQTT_FONA.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsFona.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/Adafruit_MQTT.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsMKR.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsCellular.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/MqttClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjects.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src/LiveObjectsCert.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/examples/1_send_data/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/examples/5_Command_with_arguments/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/examples/6_sms_send_data/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/examples/2_simple_parameters/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/examples/4_Simple_command/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/examples/3_Parameter_with_callback/arduino_secrets.h"
)

target_include_directories(pac-liveobjectssdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiveObjects_SDK_for_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liveobjectssdk INTERFACE
    arduino-compat
)
