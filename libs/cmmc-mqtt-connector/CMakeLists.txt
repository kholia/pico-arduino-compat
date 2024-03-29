add_library(pac-cmmc-mqtt-connector INTERFACE)

target_sources(pac-cmmc-mqtt-connector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/MQTT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/MqttConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/version.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonBufferBase.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonVariantImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonBufferImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Configuration.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonArrayImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/RawJson.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonVariantComparisons.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonObject.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonVariantBase.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonArray.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonPair.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonVariantOr.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonObjectImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonObjectSubscript.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/DynamicJsonBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonVariantCasts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonVariant.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/StaticJsonBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonArraySubscript.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/JsonVariantSubscripts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/JsonVariantDefault.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/ListIterator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/ValueSaver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/JsonVariantType.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/Encoding.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/ListConstIterator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/List.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/JsonBufferAllocated.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/JsonFloat.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/JsonVariantContent.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/NonCopyable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/JsonVariantAs.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/ReferenceType.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/ListNode.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Data/JsonInteger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/StringTraits/StringTraits.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/StringTraits/FlashString.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/StringTraits/StdString.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/StringTraits/ArduinoStream.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/StringTraits/StdStream.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/StringTraits/CharPointer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/JsonSerializer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/IndentedPrint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/Prettyfier.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/FloatParts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/JsonPrintable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/JsonSerializerImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/DummyPrint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/StreamPrintAdapter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/DynamicStringBuilder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/JsonWriter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Serialization/StaticStringBuilder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/EnableIf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsConst.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsChar.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsIntegral.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/RemoveReference.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsArray.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsBaseOf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/RemoveConst.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsUnsignedIntegral.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsSignedIntegral.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsVariant.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsSame.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/FloatTraits.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/TypeTraits/IsFloatingPoint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Deserialization/JsonParser.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Deserialization/StringWriter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Deserialization/Comments.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Deserialization/JsonParserImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Polyfills/isInteger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Polyfills/math.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Polyfills/parseFloat.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Polyfills/isFloat.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Polyfills/parseInteger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Polyfills/ctype.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson/Polyfills/attributes.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/lib/Adafruit_Sensor/Adafruit_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/PubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/version.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/PubSubClient_JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/ArduinoJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/MqttConnector.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src/MQTT.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_dht/_publish.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_dht/_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_dht/_receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_dht/init_mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_bme280/_publish.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_bme280/_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_bme280/_receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_bme280/init_mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_mqtt/_publish.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_mqtt/_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_mqtt/_receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/examples/basic_mqtt/init_mqtt.h"
)

target_include_directories(pac-cmmc-mqtt-connector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MQTT-Connector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cmmc-mqtt-connector INTERFACE
    arduino-compat
)
