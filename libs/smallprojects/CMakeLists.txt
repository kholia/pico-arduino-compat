add_library(smallprojects INTERFACE)

target_sources(smallprojects INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/SmartFarm_DeepSleep/SmartFarm_DeepSleep.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HttpBasicAuth_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HttpBasicAuth_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/UdpNTPClient_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/UdpNTPClient_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/MQTTClient_Basic_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/MQTTClient_Basic_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/MQTTClient_Auth_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/MQTTClient_Auth_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/MQTT_ThingStream_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/MQTT_ThingStream_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleDelete_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleDelete_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/PostWithHeaders_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/PostWithHeaders_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/DweetGet_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/DweetGet_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimplePost_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimplePost_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleWebSocket_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleWebSocket_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/BasicAuthGet_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/BasicAuthGet_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/DweetPost_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/DweetPost_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimplePut_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimplePut_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/HueBlink_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/HueBlink_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleHTTPExample_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleHTTPExample_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/CustomHeader_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/CustomHeader_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleGet_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HTTPClient_LAN8720/SimpleGet_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HelloServer_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HelloServer_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/PostServer_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/PostServer_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/WebClientRepeating_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/WebClientRepeating_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/WebServer_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/WebServer_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/SimpleAuthentication_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/SimpleAuthentication_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/UdpSendReceive_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/UdpSendReceive_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HelloServer2_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/HelloServer2_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/AdvancedWebServer_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/AdvancedWebServer_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/WebClient_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/STM32_LAN8720/WebClient_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/src/SmallProjects.h"
)

target_include_directories(smallprojects INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmallProjects/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smallprojects INTERFACE
    arduino-compat
)
