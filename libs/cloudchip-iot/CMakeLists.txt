add_library(pac-cloudchip-iot INTERFACE)

target_sources(pac-cloudchip-iot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/Cloudchip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/mqtt/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/version.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonBufferBase.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonVariantImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonBufferImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Configuration.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonArrayImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/RawJson.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonVariantComparisons.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonObject.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonVariantBase.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonArray.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonPair.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonVariantOr.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/ArduinoJson.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonObjectImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonObjectSubscript.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/DynamicJsonBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonVariantCasts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonVariant.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/StaticJsonBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonArraySubscript.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/JsonVariantSubscripts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/JsonVariantDefault.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/ListIterator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/ValueSaver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/JsonVariantType.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/Encoding.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/ListConstIterator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/List.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/JsonBufferAllocated.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/JsonFloat.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/JsonVariantContent.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/NonCopyable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/JsonVariantAs.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/ReferenceType.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/ListNode.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Data/JsonInteger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/StringTraits/StringTraits.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/StringTraits/FlashString.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/StringTraits/StdString.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/StringTraits/ArduinoStream.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/StringTraits/StdStream.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/StringTraits/CharPointer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/JsonSerializer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/IndentedPrint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/Prettyfier.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/FloatParts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/JsonPrintable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/JsonSerializerImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/DummyPrint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/StreamPrintAdapter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/DynamicStringBuilder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/JsonWriter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Serialization/StaticStringBuilder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/EnableIf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsConst.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsChar.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsIntegral.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/RemoveReference.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsArray.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsBaseOf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/RemoveConst.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsUnsignedIntegral.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsSignedIntegral.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsVariant.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsSame.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/FloatTraits.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/TypeTraits/IsFloatingPoint.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Deserialization/JsonParser.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Deserialization/StringWriter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Deserialization/Comments.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Deserialization/JsonParserImpl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Polyfills/isInteger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Polyfills/math.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Polyfills/parseFloat.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Polyfills/isFloat.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Polyfills/parseInteger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Polyfills/ctype.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/Polyfills/attributes.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/Cloudchip.h"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/json/ArduinoJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src/lib/mqtt/PubSubClient.h"
)

target_include_directories(pac-cloudchip-iot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cloudchip-iot-arduino-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cloudchip-iot INTERFACE
    arduino-compat
)
