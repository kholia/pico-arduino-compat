add_library(pac-blynk_async_esp32_bt_wf INTERFACE)

target_sources(pac-blynk_async_esp32_bt_wf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/src/BlynkSimpleEsp32_Async_BLE_WF.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/src/BlynkSimpleEsp32_Async_BT_WF.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/src/BlynkSimpleEsp32_Async_WFM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/src/BlynkSimpleEsp32_Async_WF.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED_BT_BLE_WF/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED_BT_BLE_WF/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED_BT_BLE_WF/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED_BT_WF/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED_BT_WF/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED_BT_WF/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_BLE/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_BLE/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_BLE/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_OLED/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_BT/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_BT/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_Geiger_Counter_BT/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_ESP32_BT_WF/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_ESP32_BT_WF/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_ESP32_BT_WF/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_ESP32_BLE_WF/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_ESP32_BLE_WF/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_ESP32_BLE_WF/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_PET_Check/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_PET_Check/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/examples/Async_PET_Check/Credentials.h"
)

target_include_directories(pac-blynk_async_esp32_bt_wf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_ESP32_BT_WF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blynk_async_esp32_bt_wf INTERFACE
    arduino-compat
)
