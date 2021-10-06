add_library(promlokitransport INTERFACE)

target_sources(promlokitransport INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/PLTransport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/MKRGSM1400Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/MKRWIFI1010Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/ESP32Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/ESP8266Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/bear/vector.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/bear/BearHelper.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/bear/certs.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/bear/names.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/bear/xmem.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/ArduinoBearSSLConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/PLDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/PLTransport.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/PromLokiTransport.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/MKRWIFI1010Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/ESP32Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/ESP8266Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/clients/MKRGSM1400Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/bear/BearHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src/bear/brssl.h"
)

target_include_directories(promlokitransport INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-prom-loki-transport/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(promlokitransport INTERFACE
    arduino-compat
)
