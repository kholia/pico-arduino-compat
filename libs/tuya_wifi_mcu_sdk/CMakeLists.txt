add_library(tuya_wifi_mcu_sdk INTERFACE)

target_sources(tuya_wifi_mcu_sdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaUart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaDataPoint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaTools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaWifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaUart.h"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaTools.h"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaDataPoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src/TuyaWifi.h"
)

target_include_directories(tuya_wifi_mcu_sdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tuya-wifi-mcu-sdk-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tuya_wifi_mcu_sdk INTERFACE
    arduino-compat
)
