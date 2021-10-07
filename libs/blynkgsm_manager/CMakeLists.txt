add_library(pac-blynkgsm_manager INTERFACE)

target_sources(pac-blynkgsm_manager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src/BlynkSimpleTinyGSM_M.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src/BlynkSimpleEsp8266_GSM_WFM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src/BlynkSimpleEsp32_GSM_WFM.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src/BlynkSimpleEsp8266_GSM_WF.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src/BlynkSimpleEsp32_GSM_WF.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src/Adapters/BlynkGsm_ESP32M.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src/Adapters/BlynkGsm_ESP8266M.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_SHT3x/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_SHT3x/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_SHT3x/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_GSM_SHT3x/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_GSM_SHT3x/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_GSM_SHT3x/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_MRD_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_MRD_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_MRD_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_GSM_SHT3x/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_GSM_SHT3x/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP8266_GSM_SHT3x/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_MRD_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_MRD_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/ESP32_MRD_GSM/Credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_MRD_GSM/dynamicParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_MRD_GSM/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/examples/TTGO_TCALL_MRD_GSM/Credentials.h"
)

target_include_directories(pac-blynkgsm_manager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlynkGSM_Manager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blynkgsm_manager INTERFACE
    arduino-compat
)
