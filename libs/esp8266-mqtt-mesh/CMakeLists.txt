add_library(pac-esp8266-mqtt-mesh INTERFACE)

target_sources(pac-esp8266-mqtt-mesh INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/src/ESP8266MQTTMesh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/src/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/examples/ESP8266MeshIRRemote/lib/IRremoteESP8266/IRremoteESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/src/ESP8266MQTTMesh.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/src/Base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/src/WiFiCompat.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/src/ESP8266MQTTMeshBuilder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/examples/ESP8266MeshSensor/src/capabilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/examples/ESP8266MeshIRRemote/lib/IRremoteESP8266/IRremoteInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/examples/ESP8266MeshIRRemote/lib/IRremoteESP8266/IRremoteESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/examples/ESP8266MeshIRRemote/src/QueueArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/examples/ESP8266MeshHelloWorld/src/ssl_cert.h"
)

target_include_directories(pac-esp8266-mqtt-mesh INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266MQTTMesh/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-mqtt-mesh INTERFACE
    arduino-compat
)
