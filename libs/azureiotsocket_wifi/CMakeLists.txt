add_library(azureiotsocket_wifi INTERFACE)

target_sources(azureiotsocket_wifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-socket-esp32-wifi/src/socketio_esp32wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-socket-esp32-wifi/src/AzureIoTSocket_WiFi.h"
)

target_include_directories(azureiotsocket_wifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-socket-esp32-wifi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(azureiotsocket_wifi INTERFACE
    arduino-compat
)
