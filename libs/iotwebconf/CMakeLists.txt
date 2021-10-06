add_library(iotwebconf INTERFACE)

target_sources(iotwebconf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfOptionalGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfParameter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfMultipleWifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/examples/IotWebConf17JsonConfig/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfWebServerWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfTParameterBuilder.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfUsing.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfMultipleWifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConf.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfParameter.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfOptionalGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfESP32HTTPUpdateServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src/IotWebConfTParameter.h"
)

target_include_directories(iotwebconf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IotWebConf/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iotwebconf INTERFACE
    arduino-compat
)
