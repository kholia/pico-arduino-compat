add_library(pac-wifimqttmanager-library INTERFACE)

target_sources(pac-wifimqttmanager-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WifiMQTTManager/src/WiFiMQTTManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WifiMQTTManager/src/WiFiMQTTManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/WifiMQTTManager/src/utility.h"
  "${CMAKE_CURRENT_LIST_DIR}/WifiMQTTManager/examples/Basic/secrets.h"
)

target_include_directories(pac-wifimqttmanager-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WifiMQTTManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wifimqttmanager-library INTERFACE
    arduino-compat
)
