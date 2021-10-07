add_library(pac-pubsubclient INTERFACE)

target_sources(pac-pubsubclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/src/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/keepalive_spec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/connect_spec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/receive_spec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/publish_spec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/subscribe_spec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/ShimClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/Buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/BDDTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/IPAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/src/PubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/trace.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/Print.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/BDDTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/IPAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/ShimClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/Buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/tests/src/lib/Arduino.h"
)

target_include_directories(pac-pubsubclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pubsubclient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pubsubclient INTERFACE
    arduino-compat
)
