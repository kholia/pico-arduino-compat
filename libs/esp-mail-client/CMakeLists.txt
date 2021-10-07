add_library(pac-esp-mail-client INTERFACE)

target_sources(pac-esp-mail-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/ESP_Mail_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/RFC2047.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/File.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/SdVolume.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/Sd2Card.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/SdFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/ESPTimeHelper/ESPTimeHelper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp32/ESP32_SSL_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp32/ESP32_WCS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp32/ESP32_TCP_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp8266/ESP8266_WCS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp8266/ESP8266_TCP_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/WiFiNINA_TCP_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiSSLClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/wifi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/WiFiSocketBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/spi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/nano_rp2040_support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/server_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/OV2640.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/print/printf.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/sccb.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/ov7725.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/twi.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/ov264_drive.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/camera.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/SDK_Version_Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/ESP_Mail_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/ESP_Mail_FS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SDK_Version_Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/RFC2047.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/MIMEInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/SdInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/SdFatUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/SdFat.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/Sd2PinMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/Sd2Card.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/SdFatmainpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/SD/utility/FatStructs.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/print/printf.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/extras/ESPTimeHelper/ESPTimeHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp32/ESP32_WCS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp32/ESP32_SSL_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp32/ESP32_TCP_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp8266/ESP8266_TCP_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/esp8266/ESP8266_WCS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/WiFiNINA_TCP_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiSSLClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiNINA.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/WiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/wl_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/wl_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/WiFiSocketBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/server_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/wifi_spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/wifi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/spi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src/wcs/samd/lib/utility/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Attachment_Blob/blob_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Parallel_Attachment/data.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/ov264_drive.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/OV2640.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/ov2640_regs.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/sccb.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/camera_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/camera.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/ov7725_regs.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/ov7725.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/twi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_Camera_Image/cam/sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/examples/SMTP/Send_RFC822_Attachment/image.h"
)

target_include_directories(pac-esp-mail-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP-Mail-Client/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-esp-mail-client INTERFACE
    arduino-compat
    pac-sd
)
