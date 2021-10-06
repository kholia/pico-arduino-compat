add_library(esp32-ble-ancs-notifications INTERFACE)

target_sources(esp32-ble-ancs-notifications INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/ble_security.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/esp32notifications.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/ancs_ble_client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/ancs_notification_queue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/ancs_ble_client.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/ancs_notification_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/esp32notifications.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/ble_security.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src/ble_notification.h"
)

target_include_directories(esp32-ble-ancs-notifications INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-ANCS-Notifications/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-ble-ancs-notifications INTERFACE
    arduino-compat
)
