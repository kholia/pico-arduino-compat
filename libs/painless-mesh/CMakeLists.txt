add_library(painless-mesh INTERFACE)

target_sources(painless-mesh INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_layout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_router.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_tcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_plugin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/fake_serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_callback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_ntp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_protocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/catch_buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/boost/connection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/boost/tcp_integration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessMeshConnection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessMeshSTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/include/fake_asynctcp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/include/fake_serial.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/include/catch_utils.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/include/catch2/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/router.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/ota.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/protocol.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/buffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/configuration.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/connection.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/tcp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/ntp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/plugin.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/mesh.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/base64.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/layout.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessmesh/callback.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/boost/asynctcp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/arduino/wifi.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/plugin/performance.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/catch/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/test/boost/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessMesh.h"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessMeshConnection.h"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessTaskOptions.h"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src/painlessMeshSTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/examples/namedMesh/namedMesh.h"
)

target_include_directories(painless-mesh INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/painlessMesh/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(painless-mesh INTERFACE
    arduino-compat
)
