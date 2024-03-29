add_library(pac-esphap INTERFACE)

target_sources(pac-esphap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/mdnsA8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/arduino_homekit_server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/homekitintegrationcpp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/Button2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/my92xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/Clight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermoWithHistory/HTTPSimpleClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermoWithHistory/CHistory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHapSonoff_RFBridge/Button2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_HeaterControl/HTTPSimpleClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Button/CSimpleButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermostat/HTTPSimpleClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_basic_web/Button2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermo_N_Sensors/HTTPSimpleClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_AirQuality_MQ135/HTTPSimpleClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_GarageDoor/simplesensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermostatControl/HTTPSimpleClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_basic/Button2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/JPEGDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/ESP32WiFiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/EMailSender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/app_httpd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/RCSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/servo_control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/looptask_int.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/users_http.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/Motion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/hapweb/hap_webserver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/hapfilestorage/hapfilestorage.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/qr/hapqr.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/tlv.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/query_params.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/esphap_cJSON.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/storage.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/esphap_debug.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/server.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/esphap_base64.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/pairing.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/elgato.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/aa.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/xrtos.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/accessories.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/http_parser.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/port.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/cJSON_Utils.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/watchdog.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/serverA8266.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/mdnsresponder.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/bench.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/json.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/cJSON_memory.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/cQueue.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/homeintegration.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/crypto.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/picojpeg.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/port.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/query_params.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/xrtos.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/mdnsA8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/arduino_homekit_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/characteristics.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/os_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/json.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/crypto.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/cQueue.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/storage_ex.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/homeintegration.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/esphap_debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/cJSON_Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/port_x.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/esphap_cJSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/mdnsresponder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/http_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/homekit.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/elgato.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/esphap_base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/pairing.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/homekitintegrationcpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/tlv.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/watchdog.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/cJSON_memory.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/hapweb/hap_file_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/hapweb/hap_filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/wolfssl/user_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/wolfssl/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Switch/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Switch/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Switch/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/my92xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/Clight.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/sonoff_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_B1_web/Button2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermoWithHistory/Array.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermoWithHistory/HTTPSimpleClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermoWithHistory/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermoWithHistory/ESPTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermoWithHistory/CHistory.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHapSonoff_RFBridge/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHapSonoff_RFBridge/Button2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHapAdvancedLed/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHapAdvancedDimmableLed/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_HeaterControl/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_HeaterControl/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_HeaterControl/HTTPSimpleClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_HeaterControl/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_FAN/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_FAN/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_FAN/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHap_LED_Strip_RGBW/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHap_LED_Strip_RGBW/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHap_LED_Strip_RGBW/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Button/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Button/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Button/Array.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Button/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Button/CSimpleButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Button/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermostat/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermostat/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermostat/HTTPSimpleClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermostat/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_basic_web/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_basic_web/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_basic_web/sonoff_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_basic_web/Button2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermo_N_Sensors/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermo_N_Sensors/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermo_N_Sensors/HTTPSimpleClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_Thermo_N_Sensors/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_DHT11/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_DHT11/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_DHT11/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_RGB_Motion/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_RGB_Motion/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_RGB_Motion/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_AirQuality_MQ135/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_AirQuality_MQ135/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_AirQuality_MQ135/Array.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_AirQuality_MQ135/HTTPSimpleClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_AirQuality_MQ135/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_GarageDoor/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_GarageDoor/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_GarageDoor/wifi_ota.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_GarageDoor/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_GarageDoor/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_GarageDoor/simplesensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermostatControl/spiffs_webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermostatControl/filebrowse.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermostatControl/HTTPSimpleClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/EspHap_ThermostatControl/file_index_html.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/Sonoff_basic/Button2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/RCSwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/EMailSender.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/app_httpd.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/users_http.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/JpegDecoderConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/picojpeg.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/Motion.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/looptask_int.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/camera_index.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/servo_control.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/html_subj.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/ESP32WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/camera_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/JPEGDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPHap/examples/ESPHAPCamera/EMailSenderKey.h"
)

target_include_directories(pac-esphap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPHap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-esphap INTERFACE
    arduino-compat
    pac-sd
)
