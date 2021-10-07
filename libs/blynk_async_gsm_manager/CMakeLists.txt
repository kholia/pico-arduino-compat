add_library(pac-blynk_async_gsm_manager INTERFACE)

target_sources(pac-blynk_async_gsm_manager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src/BlynkSimpleEsp8266_GSM_Async_WF.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src/BlynkSimpleTinyGSM_Async_M.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src/BlynkSimpleEsp8266_GSM_Async_WFM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src/BlynkSimpleEsp32_GSM_Async_WF.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src/BlynkSimpleEsp32_GSM_Async_WFM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src/Adapters/BlynkGsm_ESP32M_Async.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src/Adapters/BlynkGsm_ESP8266M_Async.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_MRD_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_MRD_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_MRD_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_GSM_SHT3x/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_GSM_SHT3x/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_GSM_SHT3x/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP8266_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_MRD_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_MRD_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_MRD_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_SHT3x/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_SHT3x/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_SHT3x/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_MRD_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_MRD_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_MRD_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_TTGO_TCALL_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_GSM_SHT3x/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_GSM_SHT3x/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/examples/Async_ESP32_GSM_SHT3x/Credentials.h"
)

target_include_directories(pac-blynk_async_gsm_manager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Blynk_Async_GSM_Manager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blynk_async_gsm_manager INTERFACE
    arduino-compat
)
