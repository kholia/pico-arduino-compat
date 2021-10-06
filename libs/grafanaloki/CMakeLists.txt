add_library(grafanaloki INTERFACE)

target_sources(grafanaloki INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/LokiStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/LokiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/LokiStreams.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/proto/timestamp.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/proto/logproto.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/LokiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/LokiStreams.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/LokiStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/LokiDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/GrafanaLoki.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/proto/logproto.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src/proto/timestamp.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/examples/loki_02_grafana_cloud/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/examples/loki_02_grafana_cloud/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/examples/loki_04_prom_and_loki_grafana_cloud/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/examples/loki_04_prom_and_loki_grafana_cloud/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/examples/loki_03_MKR_GSM_1400_grafana_cloud/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/examples/loki_03_MKR_GSM_1400_grafana_cloud/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/examples/loki_01_local_http/config.h"
)

target_include_directories(grafanaloki INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/loki-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grafanaloki INTERFACE
    arduino-compat
)
