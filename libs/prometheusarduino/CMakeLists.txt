add_library(prometheusarduino INTERFACE)

target_sources(prometheusarduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/PromClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/WriteRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/TimeSeries.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/proto/types.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/proto/remote.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/PromClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/PromDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/PrometheusArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/TimeSeries.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/WriteRequest.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/proto/remote.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src/proto/types.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/examples/prom_02_grafana_cloud/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/examples/prom_02_grafana_cloud/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/examples/prom_01_local/config.h"
)

target_include_directories(prometheusarduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/prometheus-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(prometheusarduino INTERFACE
    arduino-compat
)
