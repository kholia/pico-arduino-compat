add_library(pac-mqttpubsubclient INTERFACE)

target_sources(pac-mqttpubsubclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/lwmqtt/helpers.c"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/lwmqtt/string.c"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/lwmqtt/packet.c"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/lwmqtt/client.c"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/lwmqtt/helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/lwmqtt/packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src/MQTTPubSubClient/lwmqtt/lwmqtt.h"
)

target_include_directories(pac-mqttpubsubclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MQTTPubSubClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mqttpubsubclient INTERFACE
    arduino-compat
)
