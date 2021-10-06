add_library(iotwebconf_for_visuino_modified_by_iot_jedi INTERFACE)

target_sources(iotwebconf_for_visuino_modified_by_iot_jedi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_Jedi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_JediParameter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_Jedi.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_JediUsing.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_JediESP32HTTPUpdateServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_JediWebServerWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_JediParameter.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src/IoTWebConf_for_Visuino_modified_by_IoT_JediSettings.h"
)

target_include_directories(iotwebconf_for_visuino_modified_by_iot_jedi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTWebConf_for_Visuino_modified_by_IoT_Jedi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iotwebconf_for_visuino_modified_by_iot_jedi INTERFACE
    arduino-compat
)
