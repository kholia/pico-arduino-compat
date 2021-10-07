add_library(pac-indhilib INTERFACE)

target_sources(pac-indhilib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/wifi_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/wifi_sta_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/api_response_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/api_client_validation.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/nvs_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/systemlib.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/debug_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/feature.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/mqtt_messaging.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/network_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/mqtt_message_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/wifi_status_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/mqtt_status_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/wifi_ap_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/messaging.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/ping_ip4.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/ip_status_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/api_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/log_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/api_client_device_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/indhilib.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/mqtt_connection.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/mqtt_static_messages.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/ble.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/provision.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/lib_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/error_code_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/event_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src/gatt_response_parser.h"
)

target_include_directories(pac-indhilib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/indhi-lib-arduino-esp32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-indhilib INTERFACE
    arduino-compat
)
